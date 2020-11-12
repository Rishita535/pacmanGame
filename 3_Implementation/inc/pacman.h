#ifndef PACMAN_H_INCLUDED
#define PACMAN_H_INCLUDED

#include<windows.h>
#include <stdio.h>
#include<conio.h>
#include<MMsystem.h>
#define H 30
#define W 60
#define gho1 5
#define success 1
#define failure 0

int display(); //This function displays "PACMAN" above the maze.

void SetColor(int ForgC); //This function is used to display maze ,pacman,ghosts in various colors.

void initialize();/* It performs 2 functions:
                  1. Replaces each empty field in the playfield with a food field.
                  2. Initializes all ghosts.
                  */
void user_input(); //This function enables arrow keys to move the pacman(@) up,down,right and left.

void move_figures();/*It performs 6 functions:
                     1. Deletes PacMan from old position,
                     2. compute new desired coordinate (nx,ny)
                     3. test whether there is a wall at (nx,ny)
                     4. update PacMan's coordinate,
                     5. check for a food piece at the new location,
                     6. put PacMan back again to playfield.
                     */

void show_playfield(); //This function displays maze and score on the console window.

void check_coll(); //This function checks:1.whether the pacman(@)touches ghosts(%)-if yes-displays score, 2.whether the pacman(@)eats 250 food items-if yes-displays score.

void set_cursor_position(int x, int y); //This function will set the cursor position to (0,0).

void hidecursor();


#endif // PACMAN_H_INCLUDED
