#include <stdio.h>

int main()
{
    union myunion
    {
        int y; // takes the storage of this as this is the longest (4)
        char x;
    };

    printf("The size of the union is : %lu", sizeof(union myunion)); //4

}