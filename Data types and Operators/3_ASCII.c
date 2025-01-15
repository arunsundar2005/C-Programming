# include <stdio.h>

void main()
{
    char ch = 126; // the char datatype can also store integers.But when called using the %c it returns the charecter based on the ASCII table
    printf("The charected represented by the variable ch is : %c",ch);
    /*
    Output:
        The charected represented by the variable ch is : ~
    */


   // The ch can also be printed as a number, and numeric operations can be performed on it.
    printf("\nThe number represented by the variable ch is : %d, and it the result addition of 3 is : %d",ch, ch-3);
  
    printf("When the 126 is subtracted by 2, it gives the result as %d, and the character that it deipicts is : '%c'", ch-2, ch-2);
}   