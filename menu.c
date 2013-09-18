#include "ships.h"

/* prints game title, menu, returns integer response from the user */

int menu(void)
{
  char selection;
  
  system("clear");
  printf("\n\n\n");
  printf("           **    *  *   *   **     **\n");
  printf("          *  *   *  *   *   * *   *  * \n");   
  printf("      *   *      *  *   *   *  *  *      *\n");
  printf("    **     *     ****   *   * *    *      **\n");
  printf("      *     *    *  *   *   *       *    * \n");
  printf("             *   *  *   *   *        *   \n");
  printf("          *  *   *  *   *   *     *  *   \n");
  printf("           **    *  *   *   *      **    \n\n\n");

  printf("MAIN MENU : \n");
  printf("1) New game.\n");
  printf("2) Author info.\n");
  printf("3) Quit.\n");
  while(scanf(" %c",&selection), selection<'1' || selection>'3')
  {
    while(getchar()!='\n') /* removes all chars from input buffer */
      continue;
    printf("Select option from 1 - 3 : ");
  }
  while(getchar()!='\n') /* removes all chars from input buffer */
      continue;
  return (selection-'0');
}