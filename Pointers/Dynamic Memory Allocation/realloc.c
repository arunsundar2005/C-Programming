# include <stdio.h>
# include <stdlib.h>

int main()
{
    int *p;
    p = (int *)malloc(2 * sizeof(int));

    if(p == NULL)
    {
        printf("Memory allocation is unsuccessful");
    }
    else
    {
        printf("Memory allocation is successful\n");

        p[0] = 54;
        p[1] = 65;

        for(int i=0; i<2; i++)
        {
            printf("p[%d] = %d\n", i, p[i]);
        }

        printf("Reallocating memory ... ...\n");
        p = realloc(p, 4 * sizeof(int));
        /*
        p = realloc(p, 4 * sizeof(double)); // This does not change the data type of the pointer, it just allocates enough memory 
                                           // to store 4 values of double data type. 
        */
        printf("Memory reallocation successfull.\n\n");

        p[2] = 456.2;
        p[3] = 65.000;

        printf("New values...\n");
        for(int i =0; i<4; i++)
        {
            printf("p[%d] = %d\n", i, p[i]);
        }
    }
}