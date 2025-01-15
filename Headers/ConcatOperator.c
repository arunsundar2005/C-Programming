#include <stdio.h>

#define concat(x, y) (x##y)
#define concat_underscore(x, y) (x##_##y)

int main() {
    int var_6_5 = 975; // Declare a variable with the name var_6_5

    // Token concatenation
    printf("The concatenation of 45 and 56 is %d\n", concat(45, 56));

    // Use the concatenation with an underscore
    printf("The value of var_6_5 is %d\n", concat_underscore(var, 6_5)); //returns 'var_6_5', thus the printf returns the value of the variable

    return 0;
}
