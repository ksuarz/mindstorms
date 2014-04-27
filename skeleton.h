#ifndef SKELETON_H
#define SKELETON_H

// Change these depending on how the robot is wired
#define LEFT OUT_B
#define RIGHT OUT_C
#define WHEELS OUT_BC
#define PEN OUT_A

// Speed of arm rotation
#define PENSPEED_X 20
#define PENSPEED_Y 30

/**
 * Move the robot forward.
 */
void forward(int msec);

/**
 * Move the robot backwards.
 */
void backward(int msec);

/**
 * Turns the robot left.
 */
void turn_left(int msec);

/**
 * Turns the robot right.
 */
void turn_right(int msec);

/**
 * Raise the wheel holding the pen.
 */
void raise_arm(void);

/**
 * Lowers the wheel holding the pen.
 */
void lower_arm(void);

#endif
//" vim: filetype=c
