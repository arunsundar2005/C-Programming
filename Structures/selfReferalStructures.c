#include <stdio.h>

int main()
{
    struct node
    {
        int x;
        float y;
        struct node  *next;
    };
    
    struct node X = {48, 95.56};
    struct node Y = {648, 6549.5, NULL};

    X.next = &Y; // Assighning the next pointer of the X stucture to the address of the Y structure.
    // the above logic cannot be defined at line 12 coz Y is not defined at that point.

    printf("Y.x = %d \nY.y = %f", X.next->x, X.next->y);


    // As one can notice, we have created a linked list.
}