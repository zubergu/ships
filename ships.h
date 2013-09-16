/* header file for BATTLESHIPS game */

#ifndef _SHIPS_H_
#define _SHIPS_H_
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define SIZE 10

/* creates empty player board board and fills it with user ships */
void create_pl_board(char (*board)[SIZE]);

/* creates empty computer board board and fills it with random ships*/
void create_cp_board(char (*board)[SIZE]);

/* print player board */
void print_pl_board(char (*board)[SIZE]);

/* print comp board */
void print_cp_board(char (*board)[SIZE]);

/* prints game screen */
void print_game_screen(char (*pl_board)[SIZE], char (*cp_board)[SIZE]);

#endif