#include <stdio.h>
extern unsigned int rand(void);

int main(void)
{
    int count;
    for (count = 0; count < 5; count++)
    {
        printf("%d\n", rand());
    }
    return 0;
}