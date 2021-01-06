#include <stdio.h>
/*
块作用域的静态变量
*/
void trystate(void);

int main(void)
{
    int count;
    for (count = 1; count <= 3; count++)
    {
        printf("Here comes iteration %d:\n", count);
        trystate();
    }
    return 0;
}

void trystate()
{
    int fade = 1;
    static int stay = 1;
    printf("fade = %d and stay = %d \n", fade++, stay++);
}