/* Love you how much
*  demonstrate loop with while
   Ethan M 4/24/2026
*/

#include <stdio.h>
void wrt_very(int count)
{


   while(count > 0)
   {
   
      printf("\n very");
	  count--;
   };
   printf(" much.\n\n");
}


int main (void)
{

   int repeat = 0;
   printf("how stong is your love 1-10? : ");
   scanf("%d", &repeat);
   printf("\nI love you very");
   wrt_very(repeat);
   return 0;