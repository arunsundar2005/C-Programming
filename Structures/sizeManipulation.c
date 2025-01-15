#include <stdio.h>

struct sizeManipulation
{
    int x;
    char c;
};
#pragma pack(1) //used for removing the unrequired padding and pack the structure properly.

struct efficientStruct
{
    int x;
    char c;
};
int main()
{
    printf("The size of the unmanaged structure is : %lu", sizeof(struct sizeManipulation)); // Expected 4 (1 integer) + 1 (1 charachter) = 5
    /*
    Output:
    The size of the unmanaged structure is : 8

   This happens because of padding is used in between diffrent datatypes to store multipl datatypes.
    */
   printf("\nThe size of the efficient structure is : %lu", sizeof(struct efficientStruct)); // Expected 4 (1 integer) + 1 (1 charachter) = 5
   /*
   Output:
   The size of the efficient structure is : 5
   Efficiently managed the space.
   */
}
