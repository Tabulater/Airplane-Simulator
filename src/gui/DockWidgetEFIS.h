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
#ifndef DOCKWIDGETEFIS_H
#define DOCKWIDGETEFIS_H

////////////////////////////////////////////////////////////////////////////////

#include <QDockWidget>

#include <defs.h>

#include <gui/GraphicsEADI.h>
#include <gui/GraphicsEHSI.h>

////////////////////////////////////////////////////////////////////////////////

namespace Ui
{
    class DockWidgetEFIS;
}

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief EFIS dock widget class.
 */
class DockWidgetEFIS : public QDockWidget
{
    Q_OBJECT

public:

    /** @brief Constructor. */
    explicit DockWidgetEFIS( QWidget *parent = NULLPTR );

    /** @brief Destructor. */
    virtual ~DockWidgetEFIS();

    /** */
    inline void setFltMode( GraphicsEADI::FltMode fltMode )
    {
        _graphicsEADI->setFltMode( fltMode );
    }

    /** */
    inline void setSpdMode( GraphicsEADI::SpdMode spdMode )
    {
        _graphicsEADI->setSpdMode( spdMode );
    }

    /** */
    inline void setLNAV( GraphicsEADI::LNAV lnav )
    {
        _graphicsEADI->setLNAV( lnav );
    }

    /** */
    inline void setVNAV( GraphicsEADI::VNAV vnav )
    {
        _graphicsEADI->setVNAV( vnav );
    }

    /** @param roll angle [deg] */
    inline void setRoll( double roll )
    {
        _graphicsEADI->setRoll( roll );
    }

    /** @param pitch angle [deg] */
    inline void setPitch( double pitch )
    {
        _graphicsEADI->setPitch( pitch );
    }

    /** @param normalized slip or skid (range from -1.0 to 1.0) */
    inline void setSlipSkid( double slipSkid )
    {
        _graphicsEADI->setSlipSkid( slipSkid );
    }

    /**
     * @param normalized turn rate (range from -1.0 to 1.0),
     * hash marks positions are set to be -0.5 and 0.5
     */
    inline void setTurnRate( double turnRate )
    {
        _graphicsEADI->setTurnRate( turnRate );
    }

    /**
     * @param dotH [-] normalized horizontal deviation position (range from -1.0 to 1.0)
     * @param dotV [-] normalized vertical deviation position (range from -1.0 to 1.0)
     * @param visibleH deviation horizontal visibility
     * @param visibleV deviation vertical visibility */
    inline void setDots( double dotH, double dotV,
                         bool visibleH, bool visibleV )
    {
        _graphicsEADI->setDots( dotH, dotV, visibleH, visibleV );
    }

    /**
     * @param FD roll angle [deg]
     * @param FD pitch angle [deg]
     * @param FD visibility */
    inline void setFD( double roll, double pitch, bool visible = true )
    {
        _graphicsEADI->setFD( roll, pitch, visible );
    }

    /** @param stall flag */
    inline void setStall( bool stall )
    {
        _graphicsEADI->setStall( stall );
    }

    /** @param altitude (dimensionless numeric value) */
    inline void setAltitude( double altitude )
    {
        _graphicsEADI->setAltitude( altitude );
    }

    /** @param airspeed (dimensionless numeric value) */
    inline void setAirspeed( double airspeed )
    {
        _graphicsEADI->setAirspeed( airspeed );
    }

    /** @param Mach number */
    inline void setMachNo( double machNo )
    {
        _graphicsEADI->setMachNo( machNo );
    }

    /** @param heading [deg] */
    inline void setHeading( double heading )
    {
        _graphicsEADI->setHeading( heading );
        _graphicsEHSI->setHeading( heading );
    }

    /** @param climb rate (dimensionless numeric value)  */
    inline void setClimbRate( double climbRate )
    {
        _graphicsEADI->setClimbRate( climbRate );
    }

    /** @param course [deg] */
    inline void setCourse( double course )
    {
        _graphicsEHSI->setCourse( course );
    }

    /**
     * setDistance
     * @param distance [nmi] distance
     * @param visible
     */
    inline void setDistance( double distance, bool visible )
    {
        _graphicsEHSI->setDistance( distance, visible );
    }

    /**
     * setBearing
     * @param bearing [deg] bearing
     * @param visible
     */
    inline void setBearing( double bearing, bool visible )
    {
        _graphicsEHSI->setBearing( bearing, visible );
    }

    /**
     * setDeviation
     * @param deviation [-]
     * @param cdi
     */
    inline void setDeviation( double deviation, GraphicsEHSI::CDI cdi )
    {
        _graphicsEHSI->setDeviation( deviation, cdi );
    }

    /** @param airspeed (dimensionless numeric value) */
    inline void setAirspeedSel( double airspeed )
    {
        _graphicsEADI->setAirspeedSel( airspeed );
    }

    /** @param altitude (dimensionless numeric value) */
    inline void setAltitudeSel( double altitude )
    {
        _graphicsEADI->setAltitudeSel( altitude );
    }

    /** @param heading [deg] */
    inline void setHeadingSel( double heading )
    {
        _graphicsEADI->setHeadingSel( heading );
        _graphicsEHSI->setHeadingSel( heading );
    }

    /** @param vfe (dimensionless numeric value) */
    inline void setVfe( double vfe )
    {
        _graphicsEADI->setVfe( vfe );
    }

    /** @param vne (dimensionless numeric value) */
    inline void setVne( double vne )
    {
        _graphicsEADI->setVne( vne );
    }

signals:

    void closed();

protected:

    void closeEvent( QCloseEvent *event );

private:

    Ui::DockWidgetEFIS *_ui;        ///<

    GraphicsEADI *_graphicsEADI;    ///<
    GraphicsEHSI *_graphicsEHSI;    ///<
};

////////////////////////////////////////////////////////////////////////////////

#endif // DOCKWIDGETEFIS_H
