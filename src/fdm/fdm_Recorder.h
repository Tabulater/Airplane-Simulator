/****************************************************************************//*
 * Copyright (C) 2021 Marek M. Cel
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom
 * the Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 ******************************************************************************/
#ifndef FDM_RECORDER_H
#define FDM_RECORDER_H

////////////////////////////////////////////////////////////////////////////////

#include <fstream>
#include <iomanip>
#include <vector>

#include <fdm/fdm_Defines.h>
#include <fdm/fdm_DataInp.h>
#include <fdm/fdm_Types.h>

////////////////////////////////////////////////////////////////////////////////

namespace fdm
{

/**
 * @brief Flight recording and replaying class.
 *
 * This class uses CSV file format.
 *
 * @see Shafranovich Y.: Common Format and MIME Type for Comma-Separated Values (CSV) Files, RFC 4180, 2005
 */
class FDMEXPORT Recorder
{
public:

    /** @brief Variable base class. */
    class VariableBase
    {
    public:

        /** @brief Constructor. */
        VariableBase() {}

        /** @brief Destructor. */
        virtual ~VariableBase() {}

        /** @brief Initializes variable. */
        virtual void initialize() = 0;

        /** @brief Interpolates variable value. */
        virtual void interpolate( double coef ) = 0;

        /** @brief Returns variable name. */
        virtual const char* name() const = 0;

        /** @brief Reads variable from stream. */
        virtual void read( std::fstream &fstream ) = 0;

        /** @brief Writes variable into stream. */
        virtual void write( std::fstream &fstream ) = 0;
    };

    /** @brief Variable class implementation. */
    template < class TYPE >
    class Variable : public VariableBase
    {
    public:

        /** Constructor. */
        Variable( const char *name, TYPE *ptr, UInt8 precision = 1 ) :
            _name       ( name ),
            _ptr        ( ptr ),
            _precision  ( precision ),
            _value      ( 0.0 ),
            _value_prev ( 0.0 )
        {}

        
        virtual ~Variable() {}

        /** @brief Initializes variable. */
        virtual void initialize()
        {
            ( *_ptr ) = _value;
        }

        /** @brief Interpolates variable value. */
        virtual void interpolate( double coef )
        {
            ( *_ptr ) = _value_prev + (TYPE)coef * ( _value - _value_prev );
        }

        /** @brief Returns variable name. */
        virtual const char* name() const
        {
            return _name.c_str();
        }

        /** @brief Reads variable from stream. */
        virtual void read( std::fstream &fstream )
        {
            _value_prev = _value;
            fstream >> _value;
        }

        /** @brief Writes variable into stream. */
        virtual void write( std::fstream &fstream )
        {
            fstream << std::setprecision( _precision );
            fstream << ( *_ptr );
        }

    private:

        std::string _name;  ///< variable name
        TYPE *_ptr;         ///< pointer to actual variable
        UInt8 _precision;   ///< floating point number precision
        TYPE _value;        ///< variable value
        TYPE _value_prev;   ///< previous variable value
    };

    typedef DataInp::Recording::Mode Mode;
    typedef std::vector< VariableBase* > Variables;

    /**
     * @brief Constructor.
     * @param desiredTimeStep
     */
    Recorder( double desiredTimeStep = 0.0 );

    /** @brief Destructor. */
    virtual ~Recorder();

    /** */
    void addVariable( VariableBase *var );

    /**
     * @brief Initializes recorder.
     * @param mode
     * @param file
     */
    void initialize( Mode mode, const char *file );

    /**
     * @brief Performs recorder step.
     * @param timeStep [s] simulation time step
     */
    void step( double timeStep );

    inline bool isRecording() const { return _recording; }
    inline bool isReplaying() const { return _replaying; }

    inline bool isRecordingOrReplaying() const
    {
        return _recording || _replaying;
    }

private:

    const double _desiredTimeStep;  ///< [s] recording desired time step (specifies how often data record is write down)

    Variables _variables;           ///< variables

    Mode _mode;                     ///< recording mode
    std::fstream _fstream;          ///< recording file stream

    double _time;                   ///< [s] time
    double _time_next;              ///< [s] next time
    double _time_prev;              ///< [s] previous time
    double _time_rec;               ///< [s] recording time variable (used to determine when write down data record)

    UInt32 _records;                ///< record counter

    bool _recording;                ///< recording active
    bool _replaying;                ///< replaying active

    std::ios_base::openmode getOpenMode( Mode mode );

    void headerRead();
    void headerWrite();

    void recordRead( double &time );
    void recordWrite( double time );

    /** @brief Performs recording step. */
    void stepRecord();

    /** @brief Performs replaying step. */
    void stepReplay();
};

} // end of fdm namespace

////////////////////////////////////////////////////////////////////////////////

#endif // FDM_RECORDER_H
