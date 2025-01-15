#include <stdio.h>

int main()
{
    // // NULL pointer
    // int *p1;
    // int *p2 = NULL; // Equal to initializing as zero.

    // printf("*p1 = %p\n", p1);//this is an arbitrary value 
    // printf("*p2 = %p", p2);

    
    // Void Pointer
    /*
    Void pointers can be used to point any data type and can point to a diffrent data type as well.
    */


    int a = 10;
    char c = 'a';

    int *p = &a;
    //p = &c; // raises error : assignment to 'int *' from incompatible pointer type 'char *' [-Wincompatible-pointer-types]

    void *p2 = &a;
    printf("The value of the pointer currently is : %d", *(int *)p2);

    p2 = &c; // no errors.
    printf("\nThe value of the pointer after change in data type is : %c", *(char *)p2); 
    // The void pointers pointing values cannot be printed directly they need casting
    // (data_type *) --> casting
    

}