#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int year, length, countUniqueNumber = 0;
    char temp;
    bool isDistinctYear = false;

    scanf("%d", &year);
    year++;
    while (!isDistinctYear)
    {
        length = snprintf(NULL, 0, "%d", year);
        char strOfYear[length];
        snprintf(strOfYear, length + 1, "%d", year);
        for (int i = 0; i < strlen(strOfYear); i++)
        {
            for (int j = i + 1; j < strlen(strOfYear); j++)
            {
                if (strOfYear[i] > strOfYear[j])
                {
                    temp = strOfYear[j];
                    strOfYear[j] = strOfYear[i];
                    strOfYear[i] = temp;
                }
            }
        }

        for (int i = 0; i < strlen(strOfYear) - 1; i++)
        {
            if (strOfYear[i] != strOfYear[i + 1])
            {
                countUniqueNumber++;
            }
        }

        if (countUniqueNumber == strlen(strOfYear) - 1)
        {
            printf("%d", year);
            isDistinctYear = true;
        }
        else
        {
            year++;
            countUniqueNumber = 0;
        }
    }
    return 0;
}

//time-complexity -> O(n^3) + n