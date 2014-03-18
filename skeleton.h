/*
 * skeleton.h - Basic functions for moving our Mindstorm around
 */

#ifndef SKELETON_H
#define SKELETON_H

// Change these depending on how the robot is wired
#define LEFT OUT_C
#define RIGHT OUT_B
#define WHEELS OUT_BC
#define PEN OUT_A

// Approximate number of milliseconds to turn 90 degrees - varies by surface,
// don't rely on this...
#define QUARTER_TURN 1460

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
void raise() {
    OnRev(PEN, 100);
    Wait(1000);
    Off(PEN);
}

/**
 * Lowers the wheel holding the pen.
 */
void lower() {
    OnFwd(PEN, 100);
    Wait(1000);
    Off(PEN);
}
#endif
//" vim: filetype=c
