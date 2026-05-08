/* Love You How Much
   Demonstrate loop with while
   Ethan M 4/14/2026
*/


#include <stdio.h>


int main(void)
{

   int repeat = 0;
   printf("how strong is your love 1-10? : ");
   scanf("%d", &repeat);
   printf("\nI love you very");
   while(repeat > 0)
   {
   
      printf("\n very");
	  repeat--;
	  
   };
   printf(" much.\n\n");
   return 0;
   
};