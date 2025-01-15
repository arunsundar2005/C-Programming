# include <stdio.h>

int main()
{
    int a[] = {6,5,6}; int b = 67;

    int *ptr = &b;

    // a = &b; //Invlaid operation, acts as a constant pointer.
    //a = ptr; // Invlaid Operation, acts as a constant pointer.
    *a = 56; //Valid operation, changes the first element of the array.
    

    // Accessing the values of the list using various methods.
    int *p = a;

    printf("a[0] = %d\na[1] = %d\na[2] = %d\n\n", a[0], a[1], a[2]);
    printf("a[0] = %d\na[1] = %d\na[2] = %d\n\n", *a, *(a+1), *(a+2));
    printf("a[0] = %d\na[1] = %d\na[2] = %d\n\n", p[0], p[1], p[2]);
    printf("a[0] = %d\na[1] = %d\na[2] = %d\n\n", *p, *(p+1), *(p+2));

    /*
    
    Output
    a[0] = 56
    a[1] = 5
    a[2] = 6

    a[0] = 56
    a[1] = 5
    a[2] = 6

    a[0] = 56
    a[1] = 5
    a[2] = 6

    a[0] = 56
    a[1] = 5
    a[2] = 6
    */
    
}