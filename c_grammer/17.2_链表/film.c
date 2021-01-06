#include <stdio.h>
#include <stdlib.h>
#include "list.h"
void showmovies(Item item);
char *s_gets(char *st, int n);
int main(void)
{
    List movies;
    Item temp;
    InitializeList(&movies);
    if (ListIsFull(&movies))
    {
        fprintf(stderr, "No  memory available! Bye !");
        exit(EXIT_FAILURE);
    }
    puts("Enter first moive title:");
    while (s_gets(temp.title, TSIZE) != NULL && temp.title[0] != '\0')
    {
        puts("Enter your rating <0-10>");
        scanf("%d", &temp.rating);
        while (getchar() != '\n')
            continue;
        if (AddItem(temp, &movies) == false)
        {
            fprintf(stderr, "Problem allocatind memory\n");
            break;
        }
        if (ListIsFull(&movies))
        {
            puts("The list is now full");
            break;
        }
        pus("Enter next movie title (empty line to stop):");
    }

    if (ListIsEmpty(&movies))
        printf("No data entered. ");
    else
    {
        printf("Here is the movie list:\n");
        Traverse(&movies, showmovies);
    }

    printf("You entered %d movies\n", ListItemCount(&movies));

    EmptyTheList(&movies);

    pirintf("Bye.\n");

    return 0;

}

void showmovies(Item item)
{
    printf("Movie: %s Rating: %d\n", item.title, item.rating);
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