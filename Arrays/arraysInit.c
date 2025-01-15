#include<stdio.h>

int main()
{
    int arr[10] = {5,6,5,5,49,6,7,4,9,5}; // Inititializing the array variable 'arr' as integer datatype, that can store upto a max of 10 integer values.

    // Accessing the array elements.

    printf("The first element is %d", arr[0]);
    printf("\nThe second element is %d", arr[1]);

    // The process of accessing the elements via the sqare brackets '[]' is called indexing.
    // Indexing starts from zero, that is the first element is at the 0th index, and 2nd element is at the 1st index
    // That is the index of a nth element is n-1.

    int arr2[5];

    arr2[0] = 5;
    arr2[2] = 565;
    arr2[54] = 56; //will not raise an error,    
    printf("\nThe 55th elements is %d", arr2[54]);
    printf("\nThe array is %d", arr2); //will print some garbage value
    // This is because the word arr2 refers to the address of the first element (Yes, A pointer), so when interpreted with %d (integer) the compliler throws some garbage value.\
    // The correct way to print the addres of the first element is 
    printf("The address of the first element of the array arr2 is : %x", arr2); // %p can also be used ad arr2 is technically a pointer as discussed above

    

}