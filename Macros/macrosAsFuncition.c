# include <stdio.h>

# define PI 3.14
# define AreaOfCircle(r) (PI*r*r) // The name of the funciton is AreaOfCircle, that accepts one argument as 'r' and returns PI*r*r

int main()
{
    printf("The area of the circle with radius 9 is %f (Floating point value)", AreaOfCircle(9));
    printf("The area of the circle with radius 9 is %d (integer value)", (int) AreaOfCircle(9)); // type conversion from float to int, will result in a rounded off value.
}