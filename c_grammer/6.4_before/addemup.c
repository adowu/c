#include <stdio.h>
int main(void)
{
    int count, sum;
    count = 0;
    sum = 0;
    while (count++ < 20)
    {
        printf("count = %d \t", count);
        sum += count;
        printf("sum=%d\n", sum);
    }
    return 0;
}