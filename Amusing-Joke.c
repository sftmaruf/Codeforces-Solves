#include <stdio.h>
#include <string.h>

int main()
{
    int biggerLength;
    char guestName[101],
        hostResidenceName[101],
        letterInThePile[101],
        concatGuestAndResidenceString[202] = "";

    scanf("%s %s %s", &guestName,
          &hostResidenceName, &letterInThePile);

    strcat(concatGuestAndResidenceString, guestName);
    strcat(concatGuestAndResidenceString, hostResidenceName);

    for (int i = 0; i < strlen(letterInThePile); i++)
    {
        for (int j = i + 1; j < strlen(letterInThePile); j++)
        {
            if (letterInThePile[i] > letterInThePile[j])
            {
                char temp = letterInThePile[j];
                letterInThePile[j] = letterInThePile[i];
                letterInThePile[i] = temp;
            }
        }
    }

    for (int i = 0; i < strlen(concatGuestAndResidenceString); i++)
    {
        for (int j = i + 1; j < strlen(concatGuestAndResidenceString); j++)
        {
            if (concatGuestAndResidenceString[i] > concatGuestAndResidenceString[j])
            {
                char temp1 = concatGuestAndResidenceString[j];
                concatGuestAndResidenceString[j] = concatGuestAndResidenceString[i];
                concatGuestAndResidenceString[i] = temp1;
            }
        }
    }

    biggerLength = strlen(concatGuestAndResidenceString) < strlen(letterInThePile)
                       ? strlen(letterInThePile)
                       : strlen(concatGuestAndResidenceString);

    for (int i = 0; i < biggerLength; i++)
    {
        if (concatGuestAndResidenceString[i] != letterInThePile[i])
        {
            printf("NO");
            return 0;
        }
    }

    printf("YES");
    return 0;
}

//time-complexity -> O(n^2) + O(n^2) + O(n)