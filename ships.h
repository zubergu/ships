/* header file for BATTLESHIPS game */

#ifndef _SHIPS_H_
#define _SHIPS_H_

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

#define SIZE 10
/* 
 * Definitions for menu options 
 */
#define NEW  1
#define INFO 2
#define QUIT 3

/*
 * Definitions for board 
 */
#define CORRECT 1
#define INCORRECT 0
#define TRUE 1
#define FALSE 0

/* * * * * 
 * 
 * Additional functions and declarations of data structures 
 *
 * * * * */

/* prints information about me:] */
void informations(void);


/* structure holding coordinates of point */
typedef struct{
  char x;
  int y;
} COORDINATES;


/* * * * *
 * 
 * Functions for displaying game title and menu. Getting response from user in main menu
 * 
 * * * * */

/* display game title, menu and get response, returns integer for proper option */
int menu(void);


/* * * * *
 * 
 * Set of functions dealing with initializing, creating displaying game boards
 *
 * * * * */

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

/* check point */
int check_point(char (*board)[SIZE], COORDINATES point);

/* check coordinates of complete ship */
int check_coords(char (*board)[SIZE],COORDINATES b, COORDINATES e, int size);


#endif