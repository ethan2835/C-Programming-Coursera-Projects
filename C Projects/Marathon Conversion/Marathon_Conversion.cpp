#include <stdio.h>

int main (void) {

 int miles = 26, years = 385;
 double kilometers;
 
   printf ("Enter miles Here: ");
   scanf ("%d", &miles);
   printf ("Enter yards Here: ");
   scanf ("%d", &yards);
   
   kilometers = 1.609 * (miles + yards / 1760.0);
   printf ("\nA marathon of %d %miles and %d yards is %.2lf kilometers);
   
 return 0;
   
 }