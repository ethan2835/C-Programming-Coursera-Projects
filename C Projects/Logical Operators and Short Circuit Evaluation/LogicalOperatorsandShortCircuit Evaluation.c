/*
Ethan M
Logical Operators and Short Circuit Evaluation
3/27/2026
*/

#include <stdio.h>

int main(void)
{

  int outside, weather;
  printf("\nEnter if outside 1 true 0 false:");
  scanf("%d", &outside);

  printf("\nEnter if rain 1 true 0 false:");
  scanf("%d", &weather);

  if (outside &&  weather)
  printf("\n{lease use and umbrella.n");

  else
  printf("\nDress normally.\n\n");


return 0;

}
