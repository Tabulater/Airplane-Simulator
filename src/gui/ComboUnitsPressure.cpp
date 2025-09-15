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

#include <gui/ComboUnitsPressure.h>

#include <fdm/utils/fdm_Units.h>

////////////////////////////////////////////////////////////////////////////////

ComboUnitsPressure::ComboUnitsPressure( QWidget *parent ) :
    ComboUnits ( parent )
{
    _coefs.push_back( 1.0 );
    _names.push_back( QString( tr("Pa") ) );

    _coefs.push_back( 0.01 );
    _names.push_back( QString( tr("hPa") ) );

    _coefs.push_back( 0.00001 );
    _names.push_back( QString( tr("bar") ) );

    _coefs.push_back( fdm::Units::pa2psi() );
    _names.push_back( QString( tr("psi") ) );

    _coefs.push_back( fdm::Units::pa2inhg() );
    _names.push_back( QString( tr("inHg") ) );

    for ( size_t i = 0; i < _names.size(); i++ ) addItem( _names[ i ] );
}

////////////////////////////////////////////////////////////////////////////////
    
ComboUnitsPressure::~ComboUnitsPressure() {}
