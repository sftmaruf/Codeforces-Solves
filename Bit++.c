#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int X = 0, numberOfStatement = 0;
    char statement[5];

    scanf("%d", &numberOfStatement);
    for (int i = 0; i < numberOfStatement; i++)
    {
        scanf("%s", &statement);
        strchr(statement, '+') != NULL ? X++ : X--;
    }
    printf("%d", X);
    return 0;
}