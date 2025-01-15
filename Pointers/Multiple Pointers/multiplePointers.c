# include <stdio.h>

int main()
{
    int a = 56;

    int *p1 = &a;
    int **p2 = &p1;
    int ***p3 = &p2;

    printf("\nThe address of the vatiable a is %p", &a);
    printf("\nThe address of the pointer p1 is %p", &p1);
    printf("\nThe address of the pointer p2 is %p", &p2);
    printf("\nTHe address of the pointer p3 is %p", &p3);
    printf("\n");

    printf("\nThe pointer value of p1 is %p (The address of the variable a)", p1); 
    printf("\nThe pointer value of p2 is %p (The address of the pointer p1)", p2);
    printf("\nThe pointer value of p3 is %p (The address of the pointer p2)", p3);

    printf("\n");
    printf("\nThe pointed value of the pointer p1 is %d (The value of the variable a)", *p1);
    printf("\nThe pointed value of the pointer p2 is %x (The value of the pointer p1, which is the address of varaible a)", *p2);
    printf("\nThe pointer value of the pointer p3 is %x (The value of the pointer p2, which is the address of pointer p1)", *p3);


    // The value of the variable can be extracted from any pointer, let us see it from p3.

    printf("\n");
    printf("\n*p3 = %x (The value of the poiner p2, that is the address of pointer p1)", *p3);
    printf("\n**p3 = %x (The value of the pointer p1, that is the address of the variable a)", **p3);
    printf("\n***p3 = %d (The value of the variable a)", ***p3);


}