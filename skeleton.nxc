#include "skeleton.h"

/**
 * Move the robot forward.
 */
void forward(int msec) {
    OnFwd(WHEELS, 100);
    Wait(msec);
    Off(WHEELS);
}

/**
 * Move the robot backwards.
 */
void backward(int msec) {
    OnRev(WHEELS, 100);
    Wait(msec);
    Off(WHEELS);
}

/**
 * Turns the robot left.
 */
void turn_left(int msec) {
    OnFwd(RIGHT, 100);
    Wait(msec);
    Off(RIGHT);
}

/**
 * Turns the robot right.
 */
void turn_right(int msec) {
    OnFwd(LEFT, 100);
    Wait(msec);
    Off(LEFT);
}

/**
 * Raise the wheel holding the pen.
 */
void raise_arm() {
    OnRev(PEN, 100);
    Wait(1000);
    Off(PEN);
}

/**
 * Lowers the wheel holding the pen.
 */
void lower_arm() {
    OnFwd(PEN, 100);
    Wait(1000);
    Off(PEN);
}
//" vim: filetype=c
