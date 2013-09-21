#include "ships.h"

/*
 * check if point is correct 
 * Takes point coordinates and an array and checks if it's in an array and if there is no ship surrounding it
 */
int check_point(char (*board)[SIZE], COORDINATES point)
{
  int ch_x;
  int ch_y;
  int i,j;
  
  if(point.x<'a' || point.x>'j' || point.y<1 || point.y>10)
    return INCORRECT;
  
  for(ch_x=point.x-'a'-1, i=0; i<3; i++, ch_x++)
  {
    for(ch_y=point.y-2, j=0;j<3;j++,ch_y++)
    {
      printf("x= %d, y= %d\n", ch_x, ch_y);
      if(ch_y<0 || ch_y>(SIZE - 1) || ch_x<0 || ch_x>(SIZE - 1))
	continue;
      else
      {
	if(board[ch_y][ch_x]=='#')
	  return INCORRECT;
      }
    }
  }
  return CORRECT;
}


/* check coordinates */
int check_coords(char (*board)[SIZE],COORDINATES b, COORDINATES e, int size)

  if(size==1)
  {
    return check_point(board,b);
    
  }
  else
  {
    /*
     * ITERATE FROM BEGINNING TO THE END OF THE SHIP
     * CHECK IF EVERY POINT IS CORRECT
     * 
     */
    
  }
  if(is_correct==INCORRECT)
  {
    printf("Given coordinates are incorrect. Try again!\n");
    return INCORRECT;
  }
  else
  {
    printf("Coordinates correct. Placing ship on the board");
    return CORRECT;
  }
}


/* create player board, fill board with user ships coordinates */
void create_pl_board(char (*board)[SIZE])
{
  int ships_no=5; /*number of ships , also length of ship being placed */
  int j=0; /* used only for printing ship in menu */
  
  COORDINATES begin;
  COORDINATES end;
  
  memset(*board,' ', SIZE*SIZE); /* sets all board fields to ' ' */
  
  board[2][2]='#';
#if 0
  for(ships_no=5;ships_no>0;ships_no--)
  {
    system("clear");
    printf("Place your ships on the board by giving coordinates for beginning and the end.\n");
    print_pl_board(board);
    
    printf("Input coordinates for this ship:  ");
    for(j=ships_no;j>0;j--) /* ships_no is len of ship to be printed */
      printf("#");
    putchar('\n');
    
    do{  
      printf("1st coord for begin: a-j:");
      scanf(" %c", &begin.x);
      printf("2nd coord for begin: 1-10:");
      scanf("%d", &begin.y);
      if(ships_no==1) /* if you want to place ship # you only need begin coordinates */
	continue;
      printf("1st coord for end: a-j:");
      scanf(" %c", &end.x);
      printf("2nd coord for end: 1-10:");
      scanf("%d", &end.y);
      printf("beg: %c-%d\tend: %c-%d\n", begin.x, begin.y, end.x, end.y);
    } while(check_coords(board,begin, end, ships_no)!=CORRECT);
    
    putchar('\n');
#endif
    printf("You succesfully placed all ships on your board!\n");
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