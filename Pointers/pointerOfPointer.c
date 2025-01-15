#include <stdio.h>

int main()
{
    int a = 0x564156F;
    int *p1 = &a;
    int *p2 = &p1;
    int *p3 = &p2;

    printf("*p1 = %p", *p1);
    printf("*p2 = %p", *p2);
    printf("*p3 = %p", *p3);
}