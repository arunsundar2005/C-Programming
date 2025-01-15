#include <stdio.h>
void printArray(int a[][3]);
M = 0; N= 0; //Global varaibles for dimesions of the multidimensional array.
int main()
{
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    M=3;N=3;
    printArray(arr,M,N);
}

void printArray(int a[][N],int m,int n ) //here giving the boundary for the 2nd column is necessary as the compiler has to allocate memory accordingly.
{
    for(int i = 0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}