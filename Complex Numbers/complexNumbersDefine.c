#include <stdio.h>

#include <complex.h> // Importing the complex header file for complex number manipulation
# define complex _Complex
# define I _Complex_I
//The complex numbers can be defined in multiple datatypes


int main()
{
    

    //float
    float complex z = 1 + 2*I;
    printf("The real part of z is: %f\n", crealf(z));
    printf("The imaginary part of z is: %f\n", cimagf(z));
   

    //double 
    double _Complex a = 1 + 5*I;
    printf("The real part of a is %f\n", creal(a));
    printf("The imaginary part of a is %f\n", cimag(a));

    //long double
    long double complex b = 654 + 5*I;
    printf("The real part of b is %lf\n", creall(a));
    printf("The imaginary part of b is %lf\n", cimagl(a));


    //note the diffrent functions used for diffrent datatypes for extracting the real and imaginary part
}

