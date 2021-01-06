#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
静态数据占用一个区域
    int static_store = 30;
    const char *pcg = "String Literal";
    "Quoted String"
自动数据占用一个区域
    int auto_store = 40;
    char auto_string [] = "Auto char Array";

动态分配的占用一个区域
    // 0x7ffdca4057a0
    int *pi;
    char *pcl;
    pi = (int *)malloc(sizeof(int));
    *pi = 35;
    // 0x7ffdca4057b0
    pcl = (char *)malloc(strlen("Dynamic String") + 1);


*/
// 0x107fc8038
int static_store = 30;
// 0x107fc8040
const char *pcg = "String Literal";

int main()
{
    puts(pcg);
    // 0x7ffee7c3f438
    int auto_store = 40;
    // 0x7ffee7c3f440
    char auto_string [] = "Auto char Array";
    printf("%c\n", auto_string[0]);
    // 0x7ffdca4057a0
    int *pi;
    char *pcl;
    pi = (int *)malloc(sizeof(int));
    *pi = 35;
    // 0x7ffdca4057b0
    pcl = (char *)malloc(strlen("Dynamic String") + 1);
    strcpy(pcl, "Dynamic String");
    printf("static_store: %d at %p\n", static_store, &static_store);
    printf("auto_store: %d at %p\n", auto_store, &auto_store);
    printf("*pi: %d at %p\n", *pi, pi);

    printf("%s at %p\n", pcg, &pcg);
    printf("%s at %p\n", auto_string, &auto_string);
    printf("%s at %p\n", pcl, pcl);
    // 0x107fc3faa
    printf("%s at %p\n", "Quoted String", "Quoted String");

    free(pi);
    free(pcl);
    return 0;
}