# include <stdio.h>

#ifndef PI // If PI is not already defined then :
    # define PI 3.14 // define PI
#endif // Close the connditional structure


int main()
{
    # ifdef PI // IF PI is already defined, then :
        printf("PI is defined.\nThe value of PI is %d", PI);
    # else // If not then, :
        printf("PI is not defined");
    # endif // close if structure.

    # ifndef G
        printf("G is not defined");
    # else
        printf("G is defined");
    # endif

    // Similar to the genral Conditional structures, we also have else and else if. All Commands and their syntax can be found in the notes.
}