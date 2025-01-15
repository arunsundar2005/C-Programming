#include <stdio.h>

int main()
{
    int a = 10;
    char s[6] = {'a','r','u','n'};

    int *p1 = &a;
    char *p2 =s; // does not require the & operator as the s already points to the first element of the array.
    
    printf("*p1 + 4 : %d", *p1);
    printf("\nThe address of a is : %p", p1);
    p1 = p1 + 4; // moving the pointer to next 4th adress
    printf("\nThe adress after icrementing 4 poitions is : %p and the current value at the position is : %d", p1, *p1);

    printf("\nThe value of the first element of the array is : %c ", *p2);
    p2++; // increaments to the next element.
    printf("\nThe next value of the array is %c", *p2); // returns 'r'
}