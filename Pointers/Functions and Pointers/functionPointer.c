#include <stdio.h>


int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int (*fptr) (int, int);

    int s1, s2;

    fptr = sum;

    s1 = fptr(4,5);
    s2 = sum(4,5);

    printf("fptr(4,5) = %d\n", s1);
    printf("sum(4,5) = %d", s2);

    /*
    Output:
    fptr(4,5) = 9
    sum(4,5) = 9
    */
    

    // It can be observed that both return the same value, so fptr() can be interpreted as a duplicate of the function sum() 
}