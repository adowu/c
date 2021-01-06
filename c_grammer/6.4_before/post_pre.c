#include <stdio.h>

int main(void)
{
    int a = 1;
    int b = 1;
    int a_post, b_pre;
    a_post = a++;
    b_pre = ++b;
    printf("a a_post b b_pre \n");
    printf("%1d %5d %5d %5d\n", a, a_post, b, b_pre);
    return 0;
}