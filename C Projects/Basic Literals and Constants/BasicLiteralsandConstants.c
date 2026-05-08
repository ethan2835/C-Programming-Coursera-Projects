#include <stdio.h>

int main(void)
{

  printf("All these are the same value:\n");
  printf("1.0   = %.10f\n" 1.0);
  printf("1.    =%.10f\n", 1.);
  printf("0.1e1 = %.10f\n", 0.1e1);
  
  
  printf("\nDifferent types:\n");
  printf("1.0f  (float)       = %.10f\n", 1.0f);
  printf("1.0L  (long double) = %1.0Lf\n", 1.0L);
  
  return 0;
  
}