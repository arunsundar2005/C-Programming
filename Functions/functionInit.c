#include <stdio.h>
int sum(int, int); /*Function prototype. The two ints inside the function paranthesis tells that the function accepts 2 integer arguments. 
^- This int indicates that the function returns a value of integer datatype.
*/
int main()
{
    int a = 56, b = 645;
    int s = sum(a,b);
    printf("The sum of the 2 numbers %d and %d is : %d ", a, b, s);
}

int sum(int x, int y) //Function defenition
{
    int sum = x+y;//Calculates the sum of the 2 parameters and stores it in athe variable sum.
    return sum; //return statement that return the variable sum that is of integer datatype.
}