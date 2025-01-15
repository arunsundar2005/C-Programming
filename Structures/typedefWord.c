#include <stdio.h>


typedef struct struct2 global1;  // A global structure.
struct struct2 {
    int y;
    char f;
};


int main()
{
    typedef struct struct1 st1;
    struct struct1 {
        int x;
        double y;
    };

    st1 s = {9, 66.6668467};
    printf("The integer value and double value of struct 1 initialized by s are %d and %lf respectively", s.x, s.y);
   


    global1 st = {5, 'g'};
    printf("\nThe integer value and character value of global struct2 initialized by st are %d and %c respectively", st.y, st.f);
    

    typedef struct     // alternate use of the typedef keyword
    {
        int x;
        double d;
    } st2 ;

    st2 s2= {9, 98.59615584};
    printf("\nThe integer value and double value of struct 1 initialized by s2 are %d and %lf respectively", s2.x, s2.d);

}
