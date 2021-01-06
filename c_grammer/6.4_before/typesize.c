#include <stdio.h>
int main(void)
{
    printf("Type int has a size of %zd bytes.\n", sizeof(int));
    printf("Type char has a size of %zd bytes.\n", sizeof(char));
    printf("Type float has a size of %zd bytes.\n", sizeof(float));
    printf("Type long has a size of %zd bytes.\n", sizeof(long));
    printf("Type double has a size of %zd bytes.\n", sizeof(double));
    printf("Type long double has a size of %zd bytes.\n", sizeof(long double));
    printf("Type long long has a size of %zd bytes.\n", sizeof(long long));

    float pi = 3.1415926536;
    // float 只保留6位的精度
    printf("%f\n", pi);
    return 0;
}