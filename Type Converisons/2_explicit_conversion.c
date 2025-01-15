#include <stdio.h>

int main()
{
    float A = (float) 10/2;

    printf("The flaoting point value of 10/2 converted explicitly is : %f", A);



    // converting double to int.
    int x = (int) 8.595265165;
    float y = (float) 8.595265165;
    printf("\nThe integer value of 8.595265165, converted via explicit conversion is %d", x);
    printf("\nThe floating point value of 8.595265165, converted via explicit conversion is %f (upto 6 decimal places), %0.2f (Upto 2 decimal places)", y,y);
}