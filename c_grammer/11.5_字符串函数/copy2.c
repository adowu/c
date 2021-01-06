#include <stdio.h>
#include <string.h>
#define WORDS "beast"
#define SIZE 40

int main()
{
    const char *origin = WORDS;
    char copy[SIZE] = "Be the best that you can be.";
    char *ps;
    puts(origin);
    puts(copy);
    ps = strcpy(copy+7, origin);
    puts(copy);
    puts(ps);
    return 0;

}