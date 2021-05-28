#include <stdio.h>
#include <string.h>

int main()
{
    char word[101], reversedWord[101];

    scanf("%s", &word);
    scanf("%s", &reversedWord);
    for (int indexFromBackward = strlen(word) - 1, indexFromForward = 0;
         indexFromBackward >= 0; indexFromBackward--, indexFromForward++)
    {
        if (word[indexFromBackward] != reversedWord[indexFromForward])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}

//time-complecity - O(n)