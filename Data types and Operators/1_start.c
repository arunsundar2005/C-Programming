# include <stdio.h> 

/* 
The above lines is the header file of the program. "stdio.h" is the name of the header file, 
the brackets <> indicate the library directory where header file exists, and the sign # is used to write the directives.
*/

int main()
{
    printf("Hello World.");
    // In C there is no new line included in the printf like python and other higher languages
    printf("How are You?");
    /* The output is given as below:

    OUTPUT:
        Hello World.How are You?

    */


    // The corrected version is as below:
    printf("\nHellow World.\nHow are you?");
    /* The output is given as below:

    OUTPUT:
        Hellow World.
        How are you?
        
    */
}

