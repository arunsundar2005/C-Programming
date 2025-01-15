//call by value is a method used in function calling, that does not alter the arguments passed to the functions

#include <stdio.h>
void swap(int, int);
int main()
{
    int a = 61, b =65;

    printf("\nThe values of the variables before calling the function \n a(1st val) : %d \n b(2nd val) : %d", a,b);

    swap(a,b);
    printf("\nThe values of the variables after calling the function \n a(1st val) : %d \n b(2nd val) : %d", a,b);
}

void swap(int x, int y)
{
    int temp = y;
    y = x;
    x = temp;

    printf("\nThe swapped values are \n 1st val : %d \n 2nd val : %d", x, y);
}

/*
Output:

The values of the variables before calling the function 
 a(1st val) : 61 
 b(2nd val) : 65
The swapped values are 
 1st val : 65 
 2nd val : 61
The values of the variables after calling the function 
 a(1st val) : 61 
 b(2nd val) : 65

The value of a and b are not changed, that is call by value. 

*/