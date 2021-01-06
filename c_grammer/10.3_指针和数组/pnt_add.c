#include <stdio.h>
#define SIZE 4
int main(void)
{
    short dates[SIZE];
    short *pti;
    short index;
    double bills[SIZE];
    double *ptf;
    pti = dates;
    ptf = bills;
    for (index = 0; index < SIZE; index++)
        printf("pointers + %d: %p %p; %p; %p\n", index, pti+index, ptf + index, pti, ptf);
    return 0;
    /*
        可以看出， short *pti  + 1 后 地址加了 2， 这是因为 short 占了 2个字节；+1 后的地址是下一个元素的地址，而不是下一个字节的地址
        double *ptf + 1 后 地址加了 8， 这是因为 double 占了 8 个字节

        pti = dates; 这里赋值的都是首元素的地址， pti = &dates[0]

        这就是为什么必须声明指针所指向对象类型的原因之一，只知道地址不够，因为计算机要知道储存对象需要多少字节
    */
}