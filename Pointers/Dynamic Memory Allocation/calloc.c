# include <stdio.h>
# include <stdlib.h>

int main()
{
    int *ip;

    ip = (int *)calloc(3, sizeof(int));

    if (ip == NULL)
    {
        printf("Memory allocation unsuccessful");
        exit(0);
    }
    else
    {
        printf("Memory allocation successfull");
        printf("\nip = %p\n\n",ip);

        // Printing the reserved memeory spaces
        printf("ip[0] = %d\n", ip[0]);
        printf("ip[1] = %d", ip[0]);
    }

    /*
    Output

    Memory allocation successfull
    ip = 000002157F26E530

    ip[0] = 0
    ip[1] = 0



    calloc refers to contagious allocation. The main diffrence between malloc and calloc is that in calloc the reserved spaces are initialized
    with a value 0, while im malloc there is no such thing, it may be zero or may not be zero.
    */
}