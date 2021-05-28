#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    long long number;
    int quantityOfLuckyNumber = 0, length;

    scanf("%lld", &number);
    length = snprintf(NULL, 0, "%lld", number);
    char strOfNumber[length];
    snprintf(strOfNumber, length + 1, "%lld", number);

    for (int atIndex = 0; atIndex < strlen(strOfNumber); atIndex++)
    {
        if (strOfNumber[atIndex] == '4' || strOfNumber[atIndex] == '7')
        {
            quantityOfLuckyNumber++;
        }
    }

    (quantityOfLuckyNumber == 4 || quantityOfLuckyNumber == 7)
        ? printf("YES")
        : printf("NO");

    return 0;
}

//time-complexity -> O(n)