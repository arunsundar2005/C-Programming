# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main()
{
    int *p1 ;
    int *p2;

    p1 = (int*)malloc(2 * sizeof(int));
    p2 = (int*)malloc(2 * sizeof(int));

    p1[0] = 554 ; p1[1] = 645;
    p2[0] = 554 ; p2[1] = 645; // p1 = p2

    int result = memcmp(p1, p2, 8);
    printf("The result is %d\n\n", result); // 0

    p1[0] = 554 ; p1[1] = 645;
    p2[0] = 554 ; p2[1] = 649; // p2[1] > p1[1]

    result = memcmp(p1, p2, 8);
    printf("The result is %d\n\n", result);// -1

    p1[0] = 554 ; p1[1] = 645;
    p2[0] = 554 ; p2[1] = 641; // p2[1] < p1[1]

    result = memcmp(p1, p2, 8);
    printf("The result is %d\n\n", result);// 1
}