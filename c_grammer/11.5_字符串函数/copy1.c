#include <stdio.h>
#include <string.h>

#define SIZE 40
#define LIM 5
char *s_gets(char *, int);
int main()
{
    char qwords[LIM][SIZE];
    char temp[SIZE];
    int i = 0;
    printf("Enter %d words beginning with q:\n", LIM);
    while (i < LIM && s_gets(temp, SIZE))
    {
        // if (temp[0] != 'q')
        if(strncmp(temp, "q", 1) == 0)
        {
            printf("%s doesn't begin with q!\n", temp);
        }
        else
        {
            strcpy(qwords[i], temp);
            i++;
        }
    }
    puts("Here are the words accepted:");
    for (i = 0; i < LIM; i++)
    {
        puts(qwords[i]);
    }
    return 0;
}

char *s_gets(char *str, int n)
{
    char *ret_val;
    int i = 0;
    ret_val = fgets(str, n, stdin);
    if (ret_val)
    {
        while (str[i] != '\n' && str[i] != '\0')
            i++;
        if (str[i] == '\n')
            str[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}