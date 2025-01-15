// Also called Pointer to a Constant address


#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;

    int *const ptr = &a; //creating a constant pointer that points to the variable 'a'

    *ptr = 56; //Changes the value of the pointed varaible (variable 'a') to 56 from 56. (valid operation)
    //ptr = &b; // Raises an error :  assignment of read-only variable 'ptr'.
    printf("The values of the varaible a now is %d", *ptr); // The values of the varaible a now is 56

    int *const ptr2 = &b;

    // ptr2 = &a // Not allowed.
    *ptr2 = 6522; // Chnages the value of the pointed varaible (Varaible 'b') to 6522 from 20. (Valid Operation)
    printf("\nThe value of the variable b now is %d", *ptr2);



}