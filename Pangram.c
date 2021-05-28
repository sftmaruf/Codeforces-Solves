#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int nOfChar, count = 0;
    scanf("%d\n", &nOfChar);
    char str[nOfChar + 1], temp;
    gets(str);

    for (int i = 0; i < nOfChar; i++)
    {
        str[i] = tolower(str[i]);
    }

    for (int i = 0; i < nOfChar; i++)
    {
        for (int j = i + 1; j < nOfChar; j++)
        {
            if (str[i] > str[j])
            {
                temp = str[j];
                str[j] = str[i];
                str[i] = temp;
            }

            if (str[i] == str[j])
            {
                for (int k = j; k < nOfChar - 1; k++)
                {
                    str[k] = str[k + 1];
                }
                nOfChar--;
                j -= 1;
            }
        }
    }

    for (int i = 0; i < nOfChar; i++)
    {
        count++;
    }

    count == 26
        ? printf("YES")
        : printf("NO");
    return 0;
}

//time-complexity - O(n ^ 2 * m)

