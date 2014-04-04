#ifndef SKELETON_H
#define SKELETON_H

// Change these depending on how the robot is wired
#define LEFT OUT_C
#define RIGHT OUT_B
#define WHEELS OUT_BC
#define PEN OUT_A

/**
 * Move the robot forward.
 */
void forward(int);

/**
 * Move the robot backwards.
 */
void backward(int);

/**
 * Turns the robot left.
 */
void turn_left(int);

/**
 * Turns the robot right.
 */
void turn_right(int msec);

/**
 * Raise the wheel holding the pen.
 */
void raise_arm();

/**
 * Lowers the wheel holding the pen.
 */
void lower_arm();

#endif
//" vim: filetype=c
