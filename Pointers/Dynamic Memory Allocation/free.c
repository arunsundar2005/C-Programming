# include <stdio.h>
# include <stdlib.h>

int main()
{
    float *fp1, *fp2;

    fp1 = (float *)malloc(2 * sizeof(float));
    fp2 = (float *)calloc(3, sizeof(float));

    if(fp1 == NULL || fp2 == NULL)
    {
        printf("Memory allocation unsuccesfull");
        exit(0);
    }
    {
        printf("Memory allocation is successfull\n\n");


        printf("Malloc\n");
        fp1[0] = 654.5;
        fp1[1] = 64655.1;
        printf("fp1[0] = %f\n", fp1[0]);
        printf("fp1[1] = %f\n\n", fp1[1]);
        printf("Calloc\n");
        printf("fp2[0] = %d\n", fp2[0]);
        printf("fp2[1] = %d\n\n", fp2[1]);
        free(fp1);
        printf("Memory allocation freed for fp1\n");
        //trying to access these data
        printf("fp1[0] = %f\n", fp1[0]); // undetermined behaviour

        free(fp2);
        printf("Memory allocation freed for fp2");
    }

    /*
    Output:

    Memory allocation is successfull

    Malloc
    fp1[0] = 654.500000
    fp1[1] = 64655.101563

    Calloc
    fp2[0] = 0
    fp2[1] = 0

    Memory allocation freed for fp1
    fp1[0] = 1063392256.000000
    Memory allocation freed for fp2


    It can be inferred that accessing the pointer's data after freeing it might result in unpredictive values. It might return the previous value, or
    it might even give garbage. Once the free function is called, the compiler marks that paraticular memory as 'available' for future uses. 
    So the memory from that particular segment cannot be trusted after the memory is freed.
    */
}