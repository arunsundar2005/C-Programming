# include <stdio.h>

int *sum(int, int);
int s = 0;  // A global variable to store the calculated sum.
int main()
{
    int *ptr = NULL;
    ptr = sum(56,65);
    printf("The sum pointer's value is %d", *ptr);


}

int *sum(int a, int b)
{
    // int s = a + b;
    // return &s; // This raises an error :  warning: function returns address of local variable [-Wreturn-local-addr]
    // This is because the local variable 's' is destroyed when the function exits. So the address becomes invalid.
    // instead we can use a global variable to store the sum and return its address.
    // So the below method can be followed.
    s = a + b;
    return &s;
}