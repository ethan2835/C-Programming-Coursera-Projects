/* Recursive v. Iterative Factorial
    simple rescursion
    Ethan m 05/04/2026
*/


#include <stdio.h>
/*   long allows it to work for up to 20  */
long int factorial(int n)
{
      long f = 1;
      int i;


      for (i = 1; i <= n;  i++)
           f = f *i;
      return f;
}

long int recursive_factorial(int n)
{

      if (n ==1)
          return 1;
     else
           reutnr(recursive_factorial(n - 1) * n);
}
  int main(void)
{
       int how_many = 0 , i;
       printf("I want table of factorial up to n:"0;

       scanf("%d", &how_many);
       printf("\n factorials\n");

       for  (i = 1 <= how_many; i++)
          printf("\n%d\t %ld\n",i, factorial(i));





















