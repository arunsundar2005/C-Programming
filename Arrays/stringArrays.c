#include<stdio.h>

int main()
{
    char string[12] = {'A', 'r','u','n',' ', 'S','u','n','d','a','r','\0'}; // '\0' --> null character, used to convey to the interpreter that the string is terminated
    

    //The string can be printed using 2 ways
    // 1st way.
    for(int i=0; i<12; i++)
    {
        printf("%c", string[i]);
    }

    /*
    Output:
    Arun Sundar  // The null pointer is printed as well. 
    */

   //2nd way
   printf("\n%s", string);
   /*
   Output:
   Arun Sundar -->The string is printed as it is
   */
 
   // If the null poninter is not assigned the %s may not work properly.

    char str[5] = {'A', 'r', 'u', 'n'};
    printf("\n%s", str);

    // Another way to initialize the string is 

    char str2[15] = "Hello World"; //Here the null character is automatically assigned
  
    printf("\n%s", str2);

}