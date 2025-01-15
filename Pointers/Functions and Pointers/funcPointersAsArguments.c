#include <stdio.h>

// Function that calculates the sum of two integers
int sum(int a, int b);

// Function that multiplies two integers using a function pointer
int multiply(int a, int b, int (*fun)(int, int));

int main() {
    // Call multiply with 2, 3, and the sum function
    printf("The multiplication of 2 and 3 is %d\n", multiply(2, 3, sum));
    return 0;
}

// Function to calculate the sum of two integers
int sum(int a, int b) {
    return a + b;
}

// Function to multiply two integers using repeated addition via a function pointer
int multiply(int a, int b, int (*fun)(int, int)) {
    int s = 0;
    for (int i = 0; i < b; i++) {  // Repeat 'b' times
        s = s + fun(a, 0);        // Add 'a' to 's' using the function pointer
    }
    return s;
}
