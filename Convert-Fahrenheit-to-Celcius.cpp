#include <stdio.h>
int main (void)
{

  int fahrenheit; 
  double celsius;
  
   //The Code Will Print the Text to be able enter the Fahrenheit
   
   printf ("Please Enter fahrenheit:");
   scanf("%d", &fahrenheit);
   
   //Convert Fahrenheit to Celsius using Formula: Celsius = (fahrenheit - 32) / 1.8
   
   celsius = (fahrenheit - 32)/1.8; //note conversion
   printf("\n %d fahrenheit is %.1f celsius.\n",
          fahrenheit, celsius);
		  
	return 0;
	
	}