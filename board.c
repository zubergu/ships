#include "ships.h"

/* create player board, get user ships coordinates */
void create_pl_board(char (*board)[SIZE])
{
  int correct_coord=0;
  int i=5; /*number of ships */
  int j=0;
  int coor_x;
  int coor_y;
  memset(*board,' ', SIZE*SIZE); /* sets all board fields to ' ' */
  printf("Place your ships on the board by giving coordinates for beginning and the end.\n");
  for(i=5;i>0;i--)
  {
    system("clear");
    printf("Place your ships on the board by giving coordinates for beginning and the end.\n");
    print_pl_board(board);
    printf("Input coordinates for this ship:  ");
    for(j=i;j>0;j--)
      printf("#");
    correct_coord=0;
    while(correct_coord==0)
    {
      printf("Start 1st coor a-j :");
      printf("Start 2nd coor 1-10 :");
      printf("End 1st coor a-j :");
      printf("End 2nd coor 1-10 :");
      correct_coord=1;
    }
    putchar('\n');
  
  }
}

/* create computer board, place random ship cooridanates */
void create_cp_board(char (*board)[SIZE])
{
  memset(*board,' ', SIZE*SIZE); /* sets all board fields to ' ' */
}


/* prints player board */
void print_pl_board(char (*board)[SIZE])
{
  int i=0,j=0;
  printf("  ");
  for(i=0;i<10;i++) 		/* prints a-z coordinates on top of  board*/
    printf("%c",'a'+i);
  putchar('\n');
  for(i=0;i<SIZE;i++)		/* prints array of chars representing board */
  {
    printf("%2d", i+1);		/* prints 1-10 coordinates in every line */
    for(j=0;j<SIZE;j++)
      printf("%c",board[i][j]);
    printf("%-2d", i+1);	/* 1-10 coordinates on the right in every line */
    if(i==4)			/* add board title */
      printf("      PLAYER BOARD"); 
    putchar('\n');
    
  }
  printf("  ");			/* prints a-z coordinates below board */
  for(i=0;i<10;i++)
    printf("%c",'a'+i);
  printf("\n\n");
}

/* prints comp board */
void print_cp_board(char (*board)[SIZE])
{
  int i=0,j=0;
  printf("  ");
  for(i=0;i<10;i++)
    printf("%c",'a'+i);
  putchar('\n');
  for(i=0;i<SIZE;i++)
  {
    printf("%2d", i+1);
    for(j=0;j<SIZE;j++)
      printf("%c",board[i][j]=='#'?' ':board[i][j]); /* hides characters representing computer ships */
    printf("%-2d", i+1);
    if(i==4)
      printf("      COMPUTER BOARD");
    putchar('\n');
    
  }
  printf("  ");
  for(i=0;i<10;i++)
    printf("%c",'a'+i);
  printf("\n\n");
}


/*
 * This function wraps up functions printing both player and computer boards on the screen 
 */
void print_game_screen(char (*pl_board)[SIZE], char (*cp_board)[SIZE])
{
  system("clear");				/* clear screen before printing boards */
  printf("\t\tBATTLESHIPS GAME\n\n\n");	
  print_pl_board(pl_board);
  print_cp_board(cp_board);
}