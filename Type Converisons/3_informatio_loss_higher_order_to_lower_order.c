#include <stdio.h>

int main()
{
    int a =0B01111111111111110000000000000000;
    short b = a; // b = 0000000000000000
    printf("The value of the origianl varable num is : %d", a);
    printf("\nThe value of the variable a in short datatype is: %d", b);

    /*
    Output:
    The value of the origianl varable num is : 268419072
    The value of the variable a in short datatype is: -16384
    */

}