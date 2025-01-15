#include <stdio.h>

int sum(int a, int b){return a+b;}
int mul(int a, int b){return a*b;}
int sub(int a, int b){return a-b;}

int main()
{
    int sm, df, ml;

    int (*fptr[3])(int, int);

    fptr[0] = sum;
    fptr[1] = mul;
    fptr[2] = sub;

    printf("The sum of 2 and 3 is %d\n", fptr[0](2,3));
    printf("The product of 2 and 3 is %d\n", fptr[1](2,3));
    printf("The diffrence of 2 and 3 is %d", fptr[2](2,3));
}

/*
Output:

The sum of 2 and 3 is 5
The product of 2 and 3 is 6
The diffrence of 2 and 3 is -1
*/