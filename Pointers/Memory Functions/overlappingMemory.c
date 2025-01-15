#include <stdio.h>
#include <string.h>

void copy() {
    unsigned char arr[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // Overlapping regions: move data within the same array
    // The source and destination will overlap in this case.
    memcpy(arr + 2, arr, 5);

    // Print the result
    for (int i = 0; i < 10; i++) {
        printf("arr[%d] = %c\n", i, arr[i]);
    }

}

void move()
{
    unsigned char arr[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // Overlapping regions: move data within the same array
    // The source and destination will overlap in this case.
    memmove(arr + 2, arr, 5);

    // Print the result
    for (int i = 0; i < 10; i++) {
        printf("arr[%d] = %c\n", i, arr[i]);
    }

}

int main()
{
    printf("The values accuired by using the memcpy funcion are as follows\n");
    copy();
    printf("\n\nThe values accuired by using the memmove function are as follows\n");
    move();
}

/*
The actual working should be

The first 5 elements from arr ('A', 'B', 'C', 'D', 'E') should be copied to the positions starting from arr[2] ('C', 'D', 'E', 'F', 'G'), resulting in :

arr[0] = 'A'
arr[1] = 'B'
arr[2] = 'A'
arr[3] = 'B'
arr[4] = 'C'
arr[5] = 'D'
arr[6] = 'E'
arr[7] = 'H'
arr[8] = 'I'
arr[9] = 'J'


*/