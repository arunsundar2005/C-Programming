# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main()
{
    unsigned char *sp; // source pointer
    unsigned char *dp; // destination pointer

    sp = (unsigned char*)malloc(4 * sizeof(unsigned char));
    dp = (unsigned char*)malloc(4 * sizeof(unsigned char));

    memset(sp, 'S', 4); // Initiating value of 'A' for each byte in the source pointer, which has a total of 4 bytes

    memcpy(dp, sp, 4); // copying the data from source pointer to destination pointer

    for(int i=0; i<4; i++) // printig the values
    {
        printf("sp[%d] = %c\n", i, sp[i]); // The value in the source pointer remains uncahnged as the data is only copied. 
        printf("dp[%d] = %c\n\n", i, dp[i]);
    }
}