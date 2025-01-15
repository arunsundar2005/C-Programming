# include <stdio.h>

int main()
{
    int a[5] = {5, 6, 2, 9, 3};

    int *ptr;
    ptr = a;

    printf("ptr[0] = %d\nptr[1] = %d\nptr[2] = %d\n...", ptr[0], ptr[1], ptr[2]);

    printf("\n\n*(ptr + 0) = %d\n*(ptr+1) = %d\n*(ptr + 2) = %d\n...", *(ptr), *(ptr+1), *(ptr+2)); // Another way of accesing values in array.

    printf("\n\nThe size of the array is : %d (4 x 5 = 20)\nWhere 5 is the number of elements in the array\n", sizeof(a));
    printf("\nThe size of the array pointer is : %d", sizeof(ptr));
}   
