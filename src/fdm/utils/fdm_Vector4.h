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
#ifndef FDM_VECTOR4_H
#define FDM_VECTOR4_H

////////////////////////////////////////////////////////////////////////////////

#include <fdm/utils/fdm_Vector.h>

////////////////////////////////////////////////////////////////////////////////

namespace fdm
{

/**
 * @brief 4 elements column vector class.
 */
class FDMEXPORT Vector4 : public Vector< 4 >
{
public:

    /** @brief Constructor. */
    Vector4();

    /** @brief Copy constructor. */
    Vector4( const Vector4 &vect );

    /** @brief Constructor. */
    Vector4( const double items[] );

    /** @return normalized vector */
    Vector4 getNormalized() const;

    /** @brief Assignment operator. */
    const Vector4& operator= ( const Vector4 &vect );

    /** @brief Addition operator. */
    Vector4 operator+ ( const Vector4 &vect ) const;

    /** @brief Negation operator. */
    Vector4 operator- () const;

    /** @brief Subtraction operator. */
    Vector4 operator- ( const Vector4 &vect ) const;

    /** @brief Multiplication operator (by scalar). */
    Vector4 operator* ( double val ) const;

    /** @brief Division operator (by scalar). */
    Vector4 operator/ ( double val ) const;

    /** @brief Unary addition operator. */
    Vector4& operator+= ( const Vector4 &vect );

    /** @brief Unary subtraction operator. */
    Vector4& operator-= ( const Vector4 &vect );

    /** @brief Unary multiplication operator (by scalar). */
    Vector4& operator*= ( double val );

    /** Unary division operator (by scalar). */
    Vector4& operator/= ( double val );

};

} // end of fdm namespace

////////////////////////////////////////////////////////////////////////////////

/** @brief Multiplication operator (by scalar). */
inline fdm::Vector4 operator* ( double val, const fdm::Vector4 &vect )
{
    return ( vect * val );
}

////////////////////////////////////////////////////////////////////////////////

#endif // FDM_VECTOR4_H
