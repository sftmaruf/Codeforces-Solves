#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char firstString[200], secondString[200], temp;

    scanf("%s", &firstString);
    scanf("%s", &secondString);

    if (strcasecmp(firstString, secondString) == 0)
    {
        printf("%d", 0);
    }
    else
    {
        for (int i = 0; i < strlen(firstString); i++)
        {
            if (tolower(firstString[i]) < tolower(secondString[i]))
            {
                printf("%d", -1);
                break;
            }
            else if (tolower(firstString[i]) > tolower(secondString[i]))
            {
                printf("%d", 1);
                break;
            }
        }
    }
    return 0;
}
