# include <stdio.h>

int main()
{
    const int x = 654; // or int const x = 654;
    // x = 578; // Not Valid, as the const variable cannot be changed of the value.
    printf("The value of the const variable x is %d", x);
}