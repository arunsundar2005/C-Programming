#include <stdio.h> 
void main(void) 
{ 
    char ch1='A', ch2; 
    /* Initialize the 'ch1' variable to char datatype and to a value of 'A',
    the 'ch2' vatriable is gust initialized as a char datatype, without explicitly assigning any value. 
    NOTE : A default value will be assighned to the variable 'ch2', which will be discussed later.
    */
    int num1, num2=14; 
    double num3, num4=6.8; 

    // The same is implemented with diffrent datatypes.

    printf("Letter is %c \n", ch1); 
    printf("Number is %d \n", num1);

    /*Here we are printing the stored variables.
    We use something called format specifier to indicate where the variable needs to be printed.
    Diffrent datatypes use diffrent format specifier. 
    A table is given below, that gives all the format specifier, with their use case
    */ 

   // Multiple format specifier can be used in a single line.


   printf("The first letter is %c and the first number is %d\n", ch1, num1);
   // The order of the format specifier must be preserved while passing values as well.

/* 
 Format Specifiers in C
__________________________________________________
| Specifier | Description                        |
|-----------|------------------------------------|
| %d        | Signed integer (int)               |
| %i        | Signed integer (int)               |
| %u        | Unsigned integer (unsigned int)    |
| %f        | Floating-point (float, double)     |
| %e        | Scientific notation (float, double)|
| %g        | Shortest representation of %e or %f|
| %c        | Character                          |
| %s        | String                             |
| %p        | Pointer address                    |
| %x        | Hexadecimal (lowercase)            |
| %X        | Hexadecimal (uppercase)            |
| %o        | Octal                              |
| %n        | Prints nothing, stores char count  |
| %%        | Prints '%'                         |
--------------------------------------------------
 */
}