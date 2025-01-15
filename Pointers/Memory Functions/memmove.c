# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main()
{
    unsigned char *sp;
    unsigned char *dp;

    sp = (unsigned char*)malloc(4 * sizeof(unsigned char));
    dp = (unsigned char*)malloc(4 * sizeof(unsigned char));


    memset(sp, 'R', 4);
    memmove(dp, sp, 4);


    for(int i =0; i<4; i++){
        printf("sp[%d] = %c\n", i, sp[i]);
        printf("dp[%d] = %c\n\n", i, dp[i]);
    }

    unsigned char *sp2;
    unsigned char *dp2;

    sp2 = (unsigned char*)malloc(4 * sizeof(unsigned char));
    dp2 = (unsigned char*)malloc(4 * sizeof(unsigned char));

    memset(sp2, 'U', 4);
    memmove(dp2, sp2, 2); // moving obly the first 2 bytes

    for(int i=0; i<4; i++)
    {
        printf("sp2[%d] = %c\n", i, sp2[i]);
        printf("dp2[%d] = %c\n\n", i, dp2[i]);
    }
    /*
    Output:

    sp2[0] = U
    dp2[0] = U

    sp2[1] = U
    dp2[1] = U

    sp2[2] = U
    dp2[2] = w // random characters

    sp2[3] = U
    dp2[3] =  // random characters
    */
}

/*
If you notice keanly, the memcpy and memmove gives the same op. This is because the memmove is desighned for overlapping memory adresses, while memcpy
does not handle overlapping addresses. The example we have provide is non-overlapping so there is no diffrence. refer to overlappingMemory.c file for 
the diffrenc of memcpy and memmove.
*/