# include <stdio.h>

int main()
{
    unsigned char a = 5, b= 9, c = 255;
    // a = 5 = 00000101
    // b = 9 = 00001001
    // c = 255 = 11111111

    // Apply Shifting

    //  '<<' - Left Shift
    //  '>>' - Right Shift

    unsigned char shifted_a = a << 2; // The numbers after the shift operator represents the number of bits to shift 
        // 00000101 << 2 = 00010100 --> 20
    unsigned char shifted_b = b << 3;
        // 00001001 << 3 = 01001000 --> 72
    unsigned char shifted_c = c << 4;
        // 11111111 << 4 = 11110000 --> 240

    // Printing these integera
    printf("The shifted value of decimal 5 is : %d (in decimal)\n", shifted_a);
    printf("The shifted value of decimal 9 is : %d (in decimal)\n", shifted_b);
    printf("The shifted value of decimal 255 is : %d (in decimal)", shifted_c);

    }
