#include <stdio.h>
int main(void)
{
    int num = 0;
    for (printf("Keep entering numbers!\n"); num != 6;)
    {
        scanf("%d", &num);
        printf("Try Again!!!\n");
    }

    printf("That's the one I want!\n");
    return 0;
}