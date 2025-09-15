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
#ifndef FDM_MATRIX_H
#define FDM_MATRIX_H

////////////////////////////////////////////////////////////////////////////////

#include <sstream>

#include <fdm/utils/fdm_Vector.h>

////////////////////////////////////////////////////////////////////////////////

namespace fdm
{

/**
 * @brief Matrix base class template.
 *
 * Matrix base class template which is using integer template parameters to
 * specify matrix size. Such an approach does not allow to perform
 * mathematical operation between matrices which sizes do not match each other
 * as they are of different types.
 *
 * @tparam ROWS matrix rows count
 * @tparam COLS matrix columns count
 */
template < unsigned int ROWS, unsigned int COLS >
class Matrix
{
public:

    /** @brief Constructor. */
    Matrix() :
        _rows ( ROWS ),
        _cols ( COLS ),
        _size ( ROWS * COLS )
    {
        for ( unsigned int i = 0; i < _size; i++ )
        {
            _items[ i ] = 0.0;
        }
    }

    /** @brief Copy constructor. */
    Matrix( const Matrix< ROWS, COLS > &mtrx ) :
        _rows ( ROWS ),
        _cols ( COLS ),
        _size ( ROWS * COLS )
    {
        setArray( mtrx._items );
    }

    /** @brief Constructor. */
    Matrix( const double items[] ) :
        _rows ( ROWS ),
        _cols ( COLS ),
        _size ( ROWS * COLS )
    {
        setArray( items );
    }

    /** @return "true" if all items are valid */
    virtual bool isValid() const
    {
        return Misc::isValid( _items, _size );
    }

    /** @brief Puts matrix items into given array. */
    virtual void getArray( double items[] ) const
    {
        for ( unsigned int i = 0; i < _size; i++ )
        {
            items[ i ] = _items[ i ];
        }
    }

    /**
     * @brief  Gets matrix item of given indicies.
     * This function is bound-checked which may affect performance.
     * Throws an exception when row or column index is out of range.
     * @return matrix item of given indicies.
     */
    virtual double getItem( unsigned int row, unsigned int col ) const
    {
        if ( ( row < _rows ) && ( col < _cols ) )
        {
            return _items[ row * _cols + col ];
        }
        else
        {
            Exception e;

            e.setType( Exception::ArrayIndexOverLimit );
            e.setInfo( "Index over limit." );

            FDM_THROW( e );
        }

        return std::numeric_limits< double >::quiet_NaN();
    }

    /** @brief Sets matrix items from given array. */
    virtual void setArray( const double items[] )
    {
        for ( unsigned int i = 0; i < _size; i++ )
        {
            _items[ i ] = items[ i ];
        }
    }

    /**
     * @brief Sets matrix item of given indicies.
     * This function is bound-checked which may affect performance.
     * Throws an exception when row or column index is out of range.
     */
    virtual void setItem( unsigned int row, unsigned int col, double value )
    {
        if ( ( row < _rows ) && ( col < _cols ) )
        {
            _items[ row * _cols + col ] = value;
        }
        else
        {
            Exception e;

            e.setType( Exception::ArrayIndexOverLimit );
            e.setInfo( "Index over limit." );

            FDM_THROW( e );
        }
    }

    /** @brief Swaps matrix rows. */
    virtual void swapRows( unsigned int row1, unsigned int row2 )
    {
        if ( ( row1 < _rows ) && ( row2 < _rows ) )
        {
            double temp[ COLS ];

            for ( unsigned int c = 0; c < COLS; c++ )
            {
                temp[ c ] = _items[ row1 * _cols + c ];
                _items[ row1 * _cols + c ] = _items[ row2 * _cols + c ];
                _items[ row2 * _cols + c ] = temp[ c ];
            }
        }
        else
        {
            Exception e;

            e.setType( Exception::ArrayIndexOverLimit );
            e.setInfo( "Index over limit." );

            FDM_THROW( e );
        }
    }

    /** @brief Returns string representation of the matrix. */
    virtual std::string toString() const
    {
        std::stringstream ss;

        for ( unsigned int r = 0; r < _rows; r++ )
        {
            for ( unsigned int c = 0; c < _cols; c++ )
            {
                ss << _items[ r * _cols + c ] << ",";
            }

            ss << std::endl;
        }

        return ss.str();
    }

    /**
     * @brief Items accessor.
     * Please notice that this operator is NOT bound-checked.
     * If you want bound-checked item accessor use getItem(int,int) or
     * setItem(int,int,double) functions.
     */
    inline double operator() ( unsigned int row, unsigned int col ) const
    {
#       ifdef _DEBUG
        if ( ( row >= _rows ) || ( col >= _cols ) )
        {
            Exception e;

            e.setType( Exception::ArrayIndexOverLimit );
            e.setInfo( "Index over limit." );

            throw e;
        }
#       endif

        return _items[ row * _cols + col ];
    }

    /**
     * @brief Items accessor.
     * Please notice that this operator is NOT bound-checked.
     * If you want bound-checked item accessor use getItem(int,int) or
     * setItem(int,int,double) functions.
     */
    inline double& operator() ( unsigned int row, unsigned int col )
    {
#       ifdef _DEBUG
        if ( ( row >= _rows ) || ( col >= _cols ) )
        {
            Exception e;

            e.setType( Exception::ArrayIndexOverLimit );
            e.setInfo( "Index over limit." );

            throw e;
        }
#       endif

        return _items[ row * _cols + col ];
    }

    /** @brief Assignment operator. */
    const Matrix< ROWS, COLS >& operator= ( const Matrix< ROWS, COLS > &mtrx )
    {
        setArray( mtrx._items );

        return (*this);
    }

    /** @brief Addition operator. */
    Matrix< ROWS, COLS > operator+ ( const Matrix< ROWS, COLS > &mtrx ) const
    {
        Matrix< ROWS, COLS > result;
        
        for ( unsigned int i = 0; i < _size; i++ )
        {
            result._items[ i ] = _items[ i ] + mtrx._items[ i ];
        }

        return result;
    }

    /** @brief Subtraction operator. */
    Matrix< ROWS, COLS > operator- ( const Matrix< ROWS, COLS > &mtrx ) const
    {
        Matrix< ROWS, COLS > result;

        for ( unsigned int i = 0; i < _size; i++ )
        {
            result._items[ i ] = _items[ i ] - mtrx._items[ i ];
        }

        return result;
    }

    /** @brief Multiplication operator (by scalar). */
    Matrix< ROWS, COLS > operator* ( double value ) const
    {
        Matrix< ROWS, COLS > result;

        for ( unsigned int i = 0; i < _size; i++ )
        {
            result._items[ i ] = _items[ i ] * value;
        }

        return result;
    }

    /** @brief Multiplication operator (by vector). */
    Vector<ROWS> operator* ( const Vector<COLS> &vect ) const
    {
        Vector<ROWS> result;

        for ( unsigned int r = 0; r < _rows; r++ )
        {
            result(r) = 0.0;

            for ( unsigned int c = 0; c < _cols; c++ )
            {
                result(r) += ( _items[ r*_cols + c ] * vect(c) );
            }
        }

        return result;
    }

    /** @brief Division operator (by scalar). */
    Matrix< ROWS, COLS > operator/ ( double value ) const
    {
        Matrix< ROWS, COLS > result;

        for ( unsigned int i = 0; i < _size; i++ )
        {
            result._items[ i ] = _items[ i ] / value;
        }

        return result;
    }

    /** @brief Unary addition operator. */
    Matrix< ROWS, COLS >& operator+= ( const Matrix< ROWS, COLS > &mtrx )
    {
        for ( unsigned int i = 0; i < _size; i++ )
        {
            _items[ i ] += mtrx._items[ i ];
        }

        return (*this);
    }

    /** @brief Unary subtraction operator. */
    Matrix< ROWS, COLS >& operator-= ( const Matrix< ROWS, COLS > &mtrx )
    {
        for ( unsigned int i = 0; i < _size; i++ )
        {
            _items[ i ] -= mtrx._items[ i ];
        }

        return (*this);
    }

    /** @brief Unary multiplication operator (by scalar). */
    Matrix< ROWS, COLS >& operator*= ( double value )
    {
        for ( unsigned int i = 0; i < _size; i++ )
        {
            _items[ i ] *= value;
        }

        return (*this);
    }

    /** @brief Unary division operator (by scalar). */
    Matrix< ROWS, COLS >& operator/= ( double value )
    {
        for ( unsigned int i = 0; i < _size; i++ )
        {
            _items[ i ] /= value;
        }

        return (*this);
    }

    /** @brief Equality operator. */
    bool operator== ( const Matrix< ROWS, COLS > &mtrx ) const
    {
        bool result = true;

        for ( unsigned int i = 0; i < _size; i++ )
        {
            result = result && ( _items[ i ] == mtrx._items[ i ] );
        }

        return result;
    }

    /** @brief Inequality operator. */
    bool operator!= ( const Matrix< ROWS, COLS > &mtrx ) const
    {
        return !( (*this) == mtrx );
    }

protected:

    double _items[ ROWS * COLS ];   ///< matrix items

    const unsigned int _rows;       ///< number of rows
    const unsigned int _cols;       ///< number of columns
    const unsigned int _size;       ///< matrix size
};

} // end of fdm namespace

////////////////////////////////////////////////////////////////////////////////

#endif // FDM_MATRIX_H
