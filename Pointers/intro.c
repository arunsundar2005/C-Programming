#include <stdio.h>

int main()
{
    int a = 10;
    int *b = &a;

    printf("a = %d", a);
    // printf(" *a = %p", *a); //raises an error. Refer notes.md
    printf("\n&a = %x", &a);
    printf("\n*b = %d", *b); // Returns the value stored at the address pointed by this pointer, that is the value stored in a that is 10
    printf("\nb = %x", b); // returns the addres of the variable a thus equal to &a
    printf("\n&b = %x", &b);


    
}