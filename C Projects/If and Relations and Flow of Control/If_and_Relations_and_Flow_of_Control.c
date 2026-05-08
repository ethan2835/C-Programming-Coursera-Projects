/* Ethan M
If and Relations and Flow of Control
4/14/2026
*/


#include <stdio.h>
int main()
{

  int speed;
  printf("\nEnter your speed as an integer:");
  scanf("%d", &speed);
  if (speed < 65)
    printf("\nNo speeding Ticket\n\n");
  else
	  printf("\nSpeeding Ticket\n\n");
	return 0;
}