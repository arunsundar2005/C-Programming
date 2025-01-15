#include <stdio.h>

void swap(int *x, int *y); // the function takes in two pointer as arguments that points to integer. The funcion has no return type.

int main()
{
    int a = 61, b = 65;

    printf("\nThe values of a and b before calling the function are \n a(1st val) : %d \n b(1st val) : %d",a,b);
    swap(&a, &b); //passing the address of the variable as a parameter to the function to the pointer in it.
    printf("\nThe values of a and b after calling the function are \n a(1st val) : %d \n b(2nd val) : %d",a,b);
}

void swap( int *x, int *y)
{
    int temp = *y;
    *y = *x;
    *x = temp;

    printf("\nThe swapped values are \n 1st val : %d \n 2nd val : %d", *x, *y);
}

/*
Output:

The values of a and b before calling the function are 
 a(1st val) : 61 
 b(1st val) : 65
The swapped values are 
 1st val : 65 
 2nd val : 61
The values of a and b after calling the function are 
 a(1st val) : 65 
 b(2nd val) : 61

The values of a and b are swapped as well this is call by reference as in the the reference of the variable is passed as the argument to the function that performs call by reference.
*/