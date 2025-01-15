#include <stdio.h>

int main()
{
    int a = 9;
    int b= 5;

    const int *const ptr = &a;

    // *ptr = 56; // Invalid Operation 
    // ptr = &b; // Invalid Operation 

    printf("The value of the varaible a is : %d", *ptr); // The pointer can only be used to read the value from the pointed variable.
    // It can neither alter the value of the pointed variable nor change the pointing variable.
}