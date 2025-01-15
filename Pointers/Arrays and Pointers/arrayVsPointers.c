# include <stdio.h>

int main()
{
    char a[6] = "Hello";
    char *b = "Hello";

    printf("The size of a (Character Array) is : %d\n", sizeof(a));
    printf("The size of b (pointer to a string) is : %d\n", sizeof(b));
    printf("The size of &a (array variable) is : %d\n\n", sizeof(&a));

    printf("b = %p\n", b);
    printf("&b = %p\n\n", &b);

    printf("a = %p\n", a);
    printf("&a = %p\n\n", &a);

    printf("The current charecter obtaines using the variable is : %c\n", *a);
    printf("The current charecter obtained using the pointer is : %c\n\n", *b);


    printf("The next character of the string obtained using the variable : %c\n", *(a+1));
    printf("The next character of the string obtained by the pointer is : %c\n\n", *(b+1));

    // printf("++a = %c\n", (++a)); // Raises an error : As the array pointer cannot accept increament or decremeant operator
    printf("++b = %c\n\n", (++b));// No errors. Returns the adderss of the next character.


    // a = "World"; //Raises an error as the array variable cannot be reassighned, in this format.
    b = "World"; // Valid Operation.



    /*
    Output:

    The size of a (Character Array) is : 6
    The size of b (pointer to a string) is : 8
    The size of &b (address of the pointer) is : 8

    b = 00007FF7AE034000
    &b = 00000008F45FF860

    a = 00000008F45FF86A
    &a = 00000008F45FF86A

    The current charecter obtaines using the variable is : H
    The current charecter obtained using the pointer is : H

    The next character of the string obtained using the variable : e
    The next character of the string obtained by the pointer is : e
    ___________________________________________________________________
    Observations:
        1. The key difftrence between the pointer ('b') and a array variable ('a') name is that b =! &b but a = &a
        2. The pointer's size is a constant 8, but the size of the array depends on the number of the elements in it. Thus pointer prove to be efficient. 
    */

}