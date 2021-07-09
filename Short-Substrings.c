#include <stdio.h>
#include <string.h>

int main()
{
    int testCases;
    scanf("%d", &testCases);
    char bString[testCases][101];

    for (int i = 0; i < testCases; i++)
    {
        scanf("%s", bString[i]);
    }

    for (int i = 0; i < testCases; i++)
    {
        int len = strlen(bString[i]);
        for (int j = 0; j < len; j += 2)
        {
            printf("%c", bString[i][j]);
        }
        printf("%c\n", bString[i][len-1]);
    }

    return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/1367/A
//time-complexity -> O(n^2)