#include <stdio.h>
#include <string.h>
#define LISTSIZE 4

int main(void)
{
    // 指针数组：首先它是一个数组，数组的元素都是指针，数组占多少个字节由数组本身决定。它是“储存指针的数组”的简称。
    // 数组指针：首先它是一个指针，它指向一个数组。在32 位系统下永远是占4 个字节，至于它指向的数组占多少字节，不知道。它是“指向数组的指针”的简称。
    // 下面到底哪个是数组指针，哪个是指针数组呢：
//A)
//int *p1[10];
// B)
// int (*p2)[10];
// 每次上课问这个问题，总有弄不清楚的。这里需要明白一个符号之间的优先级问题。

// “[]”的优先级比“*”要高。p1 先与“[]”结合，构成一个数组的定义，数组名为p1，int *修饰的是数组的内容，即数组的每个元素。
// 那现在我们清楚，这是一个数组，其包含10 个指向int 类型数据的指针，即指针数组。
// 至于p2 就更好理解了，在这里“（）”的优先级比“[]”高，“*”号和p2 构成一个指针的定义，指针变量名为p2，int 修饰的是数组的内容，即数组的每个元素。
// 数组在这里并没有名字，是个匿名数组。那现在我们清楚p2 是一个指针，它指向一个包含10 个int 类型数据的数组，即数组指针。
char *list[LISTSIZE] = {"astronomy", "astounding", "astrophysics", "ostracize"};
char *a = list[0];
puts(a);
printf("%s\n", a);
int count = 0;
int i;
for (i = 0; i < LISTSIZE; i++)
{
    if (strncmp(list[i], "astro", 5) == 0)
    {
        printf("Found: %s\n", list[i]);
        count++;
    }
    }
    printf("the list contained %d words begining with astro.\n", count);
    return 0;
}