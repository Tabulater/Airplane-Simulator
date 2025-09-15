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

#include <gui/DockWidgetEFIS.h>
#include <ui_DockWidgetEFIS.h>

////////////////////////////////////////////////////////////////////////////////

DockWidgetEFIS::DockWidgetEFIS( QWidget *parent ) :
    QDockWidget ( parent ),
    _ui ( new Ui::DockWidgetEFIS ),
    _graphicsEADI ( NULLPTR ),
    _graphicsEHSI ( NULLPTR )
{
    _ui->setupUi( this );

    _graphicsEADI = _ui->graphicsEADI;
    _graphicsEHSI = _ui->graphicsEHSI;

    _ui->widgetEADI->setSquareWidget( _ui->frameEADI );
    _ui->widgetEHSI->setSquareWidget( _ui->frameEHSI );

    _graphicsEHSI->setBearing( 0.0f, false );
    _graphicsEHSI->setDeviation( 0.0f, GraphicsEHSI::CDI::Off );
    _graphicsEHSI->setDistance( 0.0f, false );
}

////////////////////////////////////////////////////////////////////////////////

DockWidgetEFIS::~DockWidgetEFIS()
{
    DELPTR( _ui );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetEFIS::closeEvent( QCloseEvent *event )
{
    /////////////////////////////////
    QDockWidget::closeEvent( event );
    /////////////////////////////////

    emit closed();
}
