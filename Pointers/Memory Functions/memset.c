# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main()
{
    unsigned char *cp;
    cp = (unsigned char*)malloc(4 * sizeof(unsigned char));

    memset(cp, 'A', 4);
    for(int i = 0; i<4; i++)
    {
        printf("cp[%d] = %c\n", i, cp[i]);
    }


    unsigned int *ip;
    ip = (unsigned int*)malloc(3 * sizeof(unsigned int));

    memset(ip, 0x56, 12);
    for(int i = 0; i<3; i++)
    {
        printf("ip[%d] = %x\n", i, ip[i]);
    }

    /*
    memset(void *ptr, int value, size_t num) 
    fills the memory block pointed to by ptr with the byte value of value, repeated for num bytes.

    consider the below line
    memset(ip, 355, 3);

    this line is technically incorrect, because we have assighned the ip to the size of 3 unsighned integer, 
    that gives us a total of 12 (3 * size of 1 int (4)) bytes, but im the above line we are 
    only giving values for 3 bytes. so the corrected version is:

    memset(ip, 355, 12);

    There is  still a logical error here that is we are trying to assign 355 to each byte, 
    but 1 byte is only 8 bits, that is it can only store 2^8-1 = 225, so the max value is 255 and min vlaue is 0.
    So the value 355 is out of range, which might cause unpredictive brhaviour. So, it can be corrected as followes
    
    memset(ip, 86, 12);

    This is correct. 

    Using hexadeicmal instead of int we get

    memset(ip, 0x56, 12); // 0x56 is 86 in decimal

    this would result in 
    ip[0] = 56565656
    ip[1] = 56565656
    ip[2] = 56565656

    result printed in hexadecimal.
    */
}
