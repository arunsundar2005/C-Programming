# include <stdio.h>


int main()
{
    printf("This printf function is called from this line of the code : %d\n", __LINE__);
    printf("The file name is : %s\n", __FILE__);
    printf("Version number : %d\n", __STDC_VERSION__);
    printf("Today's date is : %s\n", __DATE__);
    printf("The current time is %s\n", __TIME__);    
}