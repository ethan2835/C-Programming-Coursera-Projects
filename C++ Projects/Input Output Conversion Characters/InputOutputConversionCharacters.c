#include <stdio.h>

int main(void)
{

  double x = 0.00000123445;

  printf("Different ways to print %.6f:\n\n", x);

  printf("%%f  = %f\n", x);
  printf("%%e  = %e\n", x);
  printf("%%E  = %E\n", x);
  printf("%%g  = %g\n", x);
  printf("%%G  = %G\n", x);

  return 0;

  }
