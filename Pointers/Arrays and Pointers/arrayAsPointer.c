# include <stdio.h>

int main()
{
    char string[15] = "Arun Sundar";

    printf("string = %p", string);
    printf("\n&string = %p", &string);

    //Let us take another example

    printf("\nThe address obtained without the address operator is : %p", "Hello");
    printf("\nThe address obtained with the address operator : %p", &"Hello");

    /*
    Output:
    string = 000000D1DE7FF7F1
    &string = 000000D1DE7FF7F1
    The address obtained without the address operator is : 00007FF7DA48401A
    The address obtained with the address operator : 00007FF7DA48401A


    It can be observed that both the string and &string return the same value that is the address of the first element of the variable.
    */


   char *c = "Hello";

   printf("\nc = %p", c); //returns the address of the string "Hello"
   printf("\n&c = %p", &c); // Returns the address of the pointer
   printf("\nThe next char of the string is %c", *(c+1)); //returns the next character of the string that is the letter 'e'.
}