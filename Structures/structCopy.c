#include <stdio.h>

int main()
{
    struct mystruct
    {
        int x;
        double y;
    };
    struct mystruct s1 = {88,65.1651};
    struct mystruct s2;
    s2 = s1;
    
    printf("The integer and double value of the structure s2 copied from s1 is %d and %lf respectively", s2.x, s2.y);


    // Copying via pointers
    struct mystruct *sptr = &s1; // The address of the s1 structure is given (via the & symbol) to the sptr pointer (via the * symbol)
    printf("\nThe integer and double value of the structure s2 copied from s1 via pointers is %d and %lf respectively", sptr->x, sptr->y);
   
    
}