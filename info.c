#include "ships.h"

void informations(void)
{
  printf("*********************************************\n");
  printf("* Author: Grzegorz Utnik                    *\n");
  printf("* e-mail: zubergu@gmail.com                 *\n");
  printf("* Game being in development for learning    *\n");
  printf("* purpose only.                             *\n");
  printf("*********************************************\n\n\n");
  printf("Press ENTER to continue...");
  while(getchar()!='\n') /* wait for user to press enter */
    continue;
}