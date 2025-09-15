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
#ifndef DOCKWIDGETMAIN_H
#define DOCKWIDGETMAIN_H

////////////////////////////////////////////////////////////////////////////////

#include <QDockWidget>
#include <QSettings>

#include <fdm/fdm_DataInp.h>
#include <fdm/fdm_DataOut.h>

#include <defs.h>

////////////////////////////////////////////////////////////////////////////////

namespace Ui
{
    class DockWidgetMain;
}

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Main dock widget class.
 */
class DockWidgetMain : public QDockWidget
{
    Q_OBJECT

public:

    /** @brief Constructor. */
    explicit DockWidgetMain( QWidget *parent = NULLPTR );

    /** @brief Destructor. */
    virtual ~DockWidgetMain();

    /** */
    void init();

    inline bool getFreezePosition() const { return _freeze_position; }
    inline bool getFreezeAttitude() const { return _freeze_attitude; }
    inline bool getFreezeVelocity() const { return _freeze_velocity; }

    /** */
    void setStateInp( fdm::DataInp::StateInp stateInp );
    void setStateOut( fdm::DataOut::StateOut stateOut );

    void setTimeStep( double timeStep );

    void setFlightTime( QTime time );

signals:

    void closed();

    void stateInpChanged( fdm::DataInp::StateInp stateInp );

protected:

    /** */
    void closeEvent( QCloseEvent *event );

    /** */
    void timerEvent( QTimerEvent *event );

private:

    Ui::DockWidgetMain *_ui;        ///<

    fdm::DataInp::StateInp _stateInp;   ///< simulation input state
    fdm::DataOut::StateOut _stateOut;   ///< simulation output state

    bool _freeze_position;              ///<
    bool _freeze_attitude;              ///<
    bool _freeze_velocity;              ///<

    int _timerId;   ///< timer ID
    bool _blink;    ///<

private slots:

    void on_buttonStateInpIdle_clicked();
    void on_buttonStateInpInit_clicked();
    void on_buttonStateInpWork_clicked();
    void on_buttonStateInpPause_clicked();
    void on_buttonStateInpStop_clicked();

    void on_buttonFreezePosition_toggled( bool checked );
    void on_buttonFreezeAttitude_toggled( bool checked );
    void on_buttonFreezeVelocity_toggled( bool checked );
};

////////////////////////////////////////////////////////////////////////////////

#endif // DOCKWIDGETMAIN_H
