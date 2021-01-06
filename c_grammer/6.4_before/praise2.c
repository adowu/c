#include <stdio.h>
#include <string.h>

#define PRAISE "You are an extraordianry being."

int main(void) 
{
    char name[40];
    printf("What's your name? \n");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);
    printf("Your name of %zd letters occupies %zd memory cells.\n", strlen(name), sizeof(name));

    printf("The phrase of praise has %zd letters ", strlen(PRAISE));

    // sizeof 后面是否有圆括号，取决于：后面是类型时，圆括号是必须的，是特定量，可有可无，尽量都是用圆括号，更好
    printf("and occupies %zd memeory cells. \n", sizeof PRAISE);
    return 0;
}