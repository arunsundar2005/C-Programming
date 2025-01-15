#include <stdio.h>

int main()
{
    float var = 5; // Initialzin as integer '5'
    printf("The floating point representation of 5 is %f", var); // prints as floating point

    /*
    O/p

    The floating point representation of 18 is 5.000000
    */

   printf("\nThe floating point represenation of 5 in 2 decimal places is : %0.2f", var); // Using 0.2f for only getting 2 decimal palces


   float pi = 3.14;

   printf("The memeory location of the variable is %d", pi); // outputs the memory adress of the pi variable

   int a = 3.14;

   printf("The value of 3.14 in integer is %d", a); // output the value as 3


   int x = 5;
   char y = 'a';

   printf("\nThe ASCII value of the 'a' is : %d", y); // returns the ASCII value of the char y -> 97
   printf("\nThe sum of the ASCII value of 'a' and 5 is : %d", x+y); // Returns 97+5 = 102


   double num = 5.449484;
   printf("\nThe double value of num is int is %lf",num);// returns the long float value of num

    int b = num;
    printf("\nThe integer value of num is %d", b);
}