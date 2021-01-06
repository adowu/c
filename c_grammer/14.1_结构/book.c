#include <stdio.h>
#include <string.h>

#define MAXTITLE 41
#define MAXAUTL 31

char *s_gets(char *st, int n);

struct book
{
    char title[MAXTITLE];
    char author[MAXAUTL];
    float value;
};

int main(void)
{
    struct book library;
    printf("Please enter the book title.\n");
    s_gets(library.title, MAXTITLE);
    printf("Now enter the author.\n");
    s_gets(library.author, MAXAUTL);
    printf("Now enter the value.\n");
    scanf("%f", &library.value);
    printf("%s by %s: $%.2f\n", library.title, library.author, library.value);

    printf("Done!\n");
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
