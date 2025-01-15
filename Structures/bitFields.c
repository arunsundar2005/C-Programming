// #include <stdio.h>
// struct withBitFields
// {
//     int x : 16 ;
//     char y;
// };


// struct withoutBitFields
// {
//     int x;
//     char y;
// };


// int main()
// {
//     struct withBitFields s1 = {38,'b'};
//     struct withoutBitFields s2 = {12,'a'};

    
//     printf("The size of the withBitFields structure is : %lu", sizeof(s1));
//     printf("\nThe size of the withoutBitFields structure is : %lu", sizeof(s2));
// }


#include <stdio.h> 
struct myStruct1 {
    int a : 32; 
    char c; 
}; 

struct myStruct2 { 
    int a : 8; 
    char c; 
}; 

int main() { 
    struct myStruct1 s1={6548, 'a'}; 
    struct myStruct2 s2 ={38, 'b'}; 
    printf("Size of s1 is : %lu \n",sizeof(s1)); 
    printf("Size of s2 is : %lu",sizeof(s2)); 
}