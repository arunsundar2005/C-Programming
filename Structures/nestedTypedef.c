#include <stdio.h>

int main()
{
   typedef struct 
   {
    int x;
    struct innerstr
    {
        int y;
    } st2;
   }nestedTypedef;
   
   nestedTypedef st1;
   st1.x = 5654;
   st1.st2.y = 4587;

    printf("The integer value of the upper nested stucture is %d and the integer form the inner structure is %d", st1.x, st1.st2.y);
}