#include "ships.h"


int main(void)
{
  int selection;
  char pl_board[SIZE][SIZE];
  char cp_board[SIZE][SIZE];
  
  while((selection=menu())!=QUIT) /* 3 is for quit in menu() function */
  {
    switch(selection)
    {
      case NEW: 
	//create_pl_board(pl_board);
	create_cp_board(cp_board);
	//print_pl_board(pl_board);
	print_pl_board(cp_board);
	break;
      case INFO: 
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
