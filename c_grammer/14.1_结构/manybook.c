#include <stdio.h>
#include <string.h>
#define MAXTITLE 40
#define MAXAUTHOR 30
#define MAXBOOKS 100

char *s_gets(char *st, int n);

struct book
{
    char title[MAXTITLE];
    char author[MAXAUTHOR];
    float value;
};

int main(void)
{
    struct book library[MAXBOOKS];
    int count = 0;
    int index;
    printf("Please enter the book title.\n");
    printf("please [enter] at the start of the line to stop.\n");

    while (count < MAXBOOKS && s_gets(library[count].title, MAXTITLE) != NULL && library[count].title[0] != '\0')
    {
        printf("Now enter the author.\n");
        s_gets(library[count].author, MAXAUTHOR);
        printf("Now enter the value.\n");
        scanf("%f", &library[count].value);
        while (getchar() != '\n')
            continue;
        if (count < MAXBOOKS)
            printf("Enter the next titile.\n");
    }
    if (count > 0)
    {
        printf("Here is the list of your books:\n");
        for (index = 0; index < count; index++)
            printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index].value);
    }
    else
    {
        printf("No books? Too bad.\n");
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