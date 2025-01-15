#include <stdio.h>

int main()
{
    int marr[3][3] = {54, 65, 54,32,69,2,0,1,5};

    //------------------------OR--------------------------------//

    int marr2[3][3] = {
        {56,65,54},
        {32,69,2},
        {0,1,5}
    };

    for(int i =0; i<3; i++)      // Printing the 2D array
    {
        for(int j=0; j<3; j++)
        {
            printf("%d\t", marr[i][j]); //to print the elements of all columns of a row with a tab space.
        }
        printf("\n"); // To print the new row in a new line.
    }


    int uarr[3][3];
    for(int i =0; i<3; i++) // for each row 
    {
        for(int j =0 ; j<3; j++) // for each column
        {
            printf("Enter the element at %dth row and %dth column : ", i+1, j+1);
            scanf("%d", &uarr[i][j]); // getting the printed element and storing it in the appropriate location.
        }
    }




    int arr[][2] = {{1,2},{5,2},{6,9}}; // the first dimension of a multi diamension can be skipped from assigning the max length
    // int arr[][][5]; // Is not allowed. Only the first dimesion can be left blank
    // Error: declaration of 'arr' as multidimesional array must have bounds for all dimensions except first one.



    
}