# include <stdio.h>
# include <stdlib.h>

int main()
{
    int *ip;
    ip = (int*)malloc(2*sizeof(int));
    

    if(ip == NULL)
    {
        printf("Memory allocation failed\n");
        exit(0);
    }
    else
    {
        printf("Memory allocation successful\n");
        printf("ip = %p\n\n", ip);

        printf("ip[0] = %d\n", ip[0]); // The dereferencing operatot (*) is not necessay here
        printf("ip[1] = %d\n", ip[1]);
        printf("ip[2] = %d\n", ip[2]);
        printf("ip[3] = %d\n", ip[3]);
        printf("ip[4] = %d\n", ip[4]);
        printf("ip[5] = %d\n", ip[5]);
        printf("ip[6] = %d\n", ip[6]);
        printf("ip[7] = %d\n\n\n", ip[7]);

        /*
        Here ip[0] and ip[1] are all reserved memory, but others are all unreserved, 
        meaning that the in line number 7 we have assigned for only 2 integers. So only those 2 are reserved.
        So, like ip[3] - ip[7] are unreserved.
        */


        //Trying to allocate values to these memory spaces

        ip[0] = 576;
        ip[1] = 656;

        ip[2] = 56; //     -|
        ip[3] = 66; //      |            
        ip[4] = 6;  //      | ------------------> Are all unreserved so may cause error while trying to allocate them.
        ip[5] = 99; //      |
        ip[6] = 23; //      |
        ip[7] = 68; //     _|
        
        printf("ip[0] = %d\n", ip[0]); // The dereferencing operatot (*) is not necessay here
        printf("ip[1] = %d\n", ip[1]);
        printf("ip[2] = %d\n", ip[2]);
        printf("ip[3] = %d\n", ip[3]);
        printf("ip[4] = %d\n", ip[4]);
        printf("ip[5] = %d\n", ip[5]);
        printf("ip[6] = %d\n", ip[6]);
        printf("ip[7] = %d\n", ip[7]);
    }
}