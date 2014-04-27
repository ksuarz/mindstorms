#ifndef DRAW_H
#define DRAW_H

// Constants for drawing letters
#define ONE   1
#define TWO   2
#define THREE 4
#define FOUR  8
#define FIVE  16
#define SIX   32
#define SEVEN 64
#define EIGHT 128
#define NINE  256

/**
 * Draws a single character to the page.
 */
void draw(char, int, int);

/**
 * Moves the robot "down" to write the next line.
 */
void next_line(void);

#endif
