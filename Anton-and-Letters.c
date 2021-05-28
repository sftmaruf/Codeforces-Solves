#include <stdio.h>
#include <string.h>

int main()
{
    char set[1001], flag = ' ';
    int uniqueLetters = 0, letterPos = 0;

    while (flag != '}')
    {
        scanf("%c", &set[letterPos]);
        flag = set[letterPos];
        letterPos++;
    }

    for (int i = 1; i < letterPos - 1; i++)
    {
        for (int j = i + 1; j < letterPos - 1; j++)
        {
            if (set[i] == set[j] && set[i] != ' ' && set[i] != ',')
            {
                set[j] = '*';
            }
        }
    }

    for (int i = 1; i < letterPos - 1; i++)
    {
        if (set[i] != ' ' && set[i] != ',' && set[i] != '*')
        {
            uniqueLetters++;
        }
    }

    printf("\n%d", uniqueLetters);
    return 0;
}

//time-complexity -> O(n^2)