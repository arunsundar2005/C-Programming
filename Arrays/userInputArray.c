#include<stdio.h>

int main()
{
    int arr[10];
    for(int i = 0; i<10; i++)
    {
        arr[i] = i*3.14; //Assigns the first 10 multiples of pie as the elements of the list arr. 
    }

    printf("The addres of the seocond element is %x", &arr[1]); // The below line prints the address of the 2nd element of the array.
    //The %x returns the address in hexadecimal form.

    char c_arr[3] = {'A', 'a', 'b'};

    for(int i =0; i<3; i++)
    {
        printf("\nThe hexadecimal values of the element is %x", c_arr[i]);
    }
    /*

    OUTPUT:
    The hexadecimal values of the element is 41
    The hexadecimal values of the element is 61
    The hexadecimal values of the element is 62

    The above values are determined as below.

    'A': ASCII value 65 (0x41 in hexadecimal) --> 41
    'a': ASCII value 97 (0x61 in hexadecimal) --> 61
    'b': ASCII value 98 (0x62 in hexadecimal) --> 62

    */


    int user_input[5];
    for(int i = 0; i<5; i++)
    {
        printf("\nEnter the %dth element : ", i+1);
        scanf("%d", &user_input[i]); // Accepting the user input and assigning in the ith index of the array
    }   

    for(int i = 0; i<5; i++) //printing the array
    {
        printf("\nThe %dth element of the array is : %d", i+1, user_input[i]);
        
    }


    
}