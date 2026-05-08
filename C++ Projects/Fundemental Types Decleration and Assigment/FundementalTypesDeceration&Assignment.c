/* Fundamental Types Declaration and Assignment
  Ethan M
  3/25/20206
*/

#include <stdio.h>

int main(void)
  {

    int a = 10, b = 20, c = 31;      /* Declare and initialize */

	double average = 0.0;           /* Good practice */

	printf("a = %d, b = %d, c = %d\n", a, b, c);

	average = (a + b + c) / 3.0;      /* For the conversion always use .0 when you want decimal result */

	printf("average = %.2f\n", average);

	return 0;
	}
