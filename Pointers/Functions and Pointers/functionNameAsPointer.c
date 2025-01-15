#include <stdio.h>

void do_something();

int main()
{
    int a = 45;

    printf("a = %d\n", a);
    printf("&a = %x\n", &a);

    printf("do_something = %x\n", do_something);
    printf("&do_something  = %x\n", &do_something);
}

void do_something()
{
    printf("Doing Something");
}

/*
Ouput:

a = 45
&a = d6bffe0c
do_something = 723414cb
&do_something  = 723414cb
*/

// It can be observed that the word 'do_something' and '&do_something' returns the address of the funtion.
// It can be concluded that the function name is a pointer as well.