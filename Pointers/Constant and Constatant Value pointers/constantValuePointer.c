#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    // 'const int *ptr' means the value pointed to by the pointer cannot be modified through this pointer
    const int *const_ptr = &a;

    // 'int *ptr2' is a regular pointer, so it can modify the value it points to
    int *ptr2 = &a;

    // Dereference 'ptr' to print the value of 'a' (valid operation)
    printf("The value of the pointer is ( *const_ptr = ) : %d\n", *const_ptr);

    // Print the value stored in 'ptr2' (the address of 'a'), corrected the usage of '&ptr2' to 'ptr2'
    printf("The value of the pointer ptr2 is ( *ptr2 = ) : %d\n", *ptr2);

    // Attempting to change the value of the variable through 'ptr' will cause an error
    // *const_ptr = 55; // Uncommenting this line will raise an error: invalid operands to binary *

    // Modifying the value of 'a' through 'ptr2' (valid operation)
    *ptr2 = 55;

    const_ptr = &b; // valid operation, as the address of the constant pointer can be changed.
    ptr2 = &b; // also valid

    // *const_ptr = 45; // Invalid
    const_ptr = &a; // valid operation, pointing back to variable a.

    printf("The modified value of a is %d", *const_ptr ); 
    /*
    Ouput: 
    The value of the pointer is ( *const_ptr = ) : 10
    The value of the pointer ptr2 is ( *ptr2 = ) : 10
    The modified value of a is 55

    The value of a is modified by the pointer 'ptr2' @ line 23.
    */
}

