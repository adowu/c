#include <stdio.h>
int main(void)
{
    const double RENT = 3852.99;
    printf("*%f*\n", RENT);
    printf("*%e*\n", RENT);
    printf("*%4.2f*\n", RENT);
    printf("*%30.1f*\n", RENT);
    printf("*%40.1f*\n", RENT);
    printf("*%10.1f*\n", RENT);

    printf("*%10.3f*\n", RENT);
    printf("*%10.3E*\n", RENT);
    printf("*%+4.2f*\n", RENT);
}