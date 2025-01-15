#include <stdio.h>

int main()
{
    struct struct1
    {
        int x;              // General Skeleton of the struct1 structure 
        float y;
    };
    
    struct struct1 s = {8, 8.26}; // Creating a structure variable 's' with skeleton of struct1 and assighning values for x and y in the structure. 
    printf("The integer inside the structure is %d", s.x);


    

    // line 11 can also be done as follows.

    // it is done with a new vaarable.

    struct struct1 str;
    str.x = 8;                              // Another way for value initialization
    str.y = 8.595;          



    struct struct1 str2 = {.x = 28, .y = 8.6945};  //Another way of initializing the values. Note the dot before the variable name.



    struct struct2
    {
        int x;
        char f;
    }
    a = {.x = 898, .f = 's'},
    b = {.x = 565, .f = 'b'};

    printf("\nThe integer value and character of struct 2 initialized by a is %d and %c resepctively", a.x, a.f);
    printf("\nThe integer value and character of struct 2 initialized by b is %d and %c resepctively", b.x, b.f);

}
 