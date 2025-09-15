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

#include <gui/ComboUnitsVelocity.h>

#include <fdm/utils/fdm_Units.h>

////////////////////////////////////////////////////////////////////////////////

ComboUnitsVelocity::ComboUnitsVelocity( QWidget *parent ) :
    ComboUnits ( parent )
{
    _coefs.push_back( 1.0 );
    _names.push_back( QString( tr("m/s") ) );

    _coefs.push_back( fdm::Units::mps2fpm() );
    _names.push_back( QString( tr("ft/min") ) );

    _coefs.push_back( fdm::Units::mps2fps() );
    _names.push_back( QString( tr("ft/s") ) );

    _coefs.push_back( fdm::Units::mps2kmh() );
    _names.push_back( QString( tr("km/h") ) );

    _coefs.push_back( fdm::Units::mps2kts() );
    _names.push_back( QString( tr("kts") ) );

    _coefs.push_back( fdm::Units::mps2mph() );
    _names.push_back( QString( tr("mph") ) );

#   ifdef SIM_TEST
    _coefs.push_back( 1.0e6 );
    _names.push_back( QString( "10^-6" ) );
#   endif

    for ( size_t i = 0; i < _names.size(); i++ ) addItem( _names[ i ] );
}

////////////////////////////////////////////////////////////////////////////////
    
ComboUnitsVelocity::~ComboUnitsVelocity() {}
