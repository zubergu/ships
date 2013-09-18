#include "ships.h"


int main(void)
{
  int selection;
  char pl_board[SIZE][SIZE];
  char cp_board[SIZE][SIZE];
  
  while((selection=menu())!=3) /* 3 is for quit in menu() function */
  {
    switch(selection)
    {
      case 1: 
	printf("Here new game will be created\n");
	break;
      case 2: 
	informations(); 
	break;
      default:
	printf("And this should never ever happen");
	break;
    }
  }
  //create_pl_board(pl_board);
  //create_cp_board(cp_board);
  
  return 0;
}
