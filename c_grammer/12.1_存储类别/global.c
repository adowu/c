#include <stdio.h>
/*
外部链接的静态变量：文件作用域，外部链接和静态存储期
*/
int units = 0;
void critic(void);

int main(void)
{
    extern int units;
    printf("How many pounds to a firkin of butter?\n");
    scanf("%d", &units);
    while (units != 56)
        critic();
    printf("You must have looked it up!\n");
    return 0;
}

void critic(void)
{
    printf("No luck, my friend. Try Again.\n");
    scanf("%d", &units);
}