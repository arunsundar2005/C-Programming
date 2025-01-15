# include <stdio.h>

void main()
{
    char ch = 0b01111110; // The prefix '0b' represents that th following number is binary
    // the binary value represents a integer value of 126

    printf("The charected represented by the variable ch is : %c",ch);
    /*
    Output:
        The charected represented by the variable ch is : ~
    */
   unsigned char x = -100;
   printf("\n%d", x);

   // The ch can also be printed as a number, and numeric operations can be performed on it.
    printf("\nThe number represented by the variable ch is : %d, and it the result addition of 3 is : %d",ch, ch+3);
}