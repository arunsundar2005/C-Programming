# include <stdio.h>

# define fact(x)\
for(int i =0; i<x; i++)\
{\
    printf("Hello %d\n", i);\
} // The line where the back slash (\) is not given is considered as the indicator for the last line of the macro function  


# define print {\
    printf("\nHello Again");\
    printf("\nHello Again");\
    printf("\nHello Again");\
}

int main()
{   
    fact(5);
    print; // macro function without paranthesis
}