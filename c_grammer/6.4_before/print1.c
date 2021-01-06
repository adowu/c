#include <stdio.h>

int main(void)
{
    int ten = 10;
    int two = 2;
    printf("Doing it right: ");
    printf("%d minus %d is %d \n", ten, two, ten - two);
    printf("DOing it wrong: ");
    // 第二个位置和第三个位置，由于没有赋值，所以打印出的是内存中的任意值；
    // 要确保转换说明的数量与待打印值的数量相等
    printf("%d minus %d is %d\n", ten);
    return 0;
}