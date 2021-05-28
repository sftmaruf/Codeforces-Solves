#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char word[100];
    int upperCount = 0, lowerCount = 0;

    scanf("%s", &word);
    for (int i = 0; i < strlen(word); i++)
    {
        if (word[i] == toupper(word[i]))
        {
            upperCount++;
        }
        else if (word[i] == tolower(word[i]))
        {
            lowerCount++;
        }
    }

    for (int i = 0; i < strlen(word); i++)
    {
        lowerCount < upperCount
            ? (word[i] = toupper(word[i]))
            : (word[i] = tolower(word[i]));
    }

    printf("%s", word);
    return 0;
}