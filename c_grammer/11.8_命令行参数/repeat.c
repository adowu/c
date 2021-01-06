#include <stdio.h>

int main(int argc, char *argv[])
{
    int count;
    printf("first arg is %s\n", argv[0]);
    printf("The command line has %d arguments:\n", argc - 1);
    for (count = 1; count < argc; count++)
    {
        printf("%d: %s\n", count, argv[count]);
    }
    return 0;
}