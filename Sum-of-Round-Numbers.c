#include <stdio.h>

int main()
{
    int noOfTestCases;
    int roundNumbers[4];
    int noOfSummands = 1;

    scanf("%d", &noOfTestCases);
    int sumOfAllRoundNumbers[noOfTestCases];

    for (int i = 0; i < noOfTestCases; i++)
    {
        scanf("%d", &sumOfAllRoundNumbers[i]);
        int j = 0;
        int reminders = sumOfAllRoundNumbers[i];
        int reservedSumOfAllRoundNumbers = sumOfAllRoundNumbers[i];

        while (sumOfAllRoundNumbers[i] % 10 != sumOfAllRoundNumbers[i])
        {
            if (sumOfAllRoundNumbers[i] >= 1000)
            {
                reminders = reminders % 1000;
            }
            else if (sumOfAllRoundNumbers[i] >= 100)
            {
                reminders = reminders % 100;
            }
            else if (sumOfAllRoundNumbers[i] >= 10)
            {
                reminders = reminders % 10;
            }

            if (reminders != 0)
            {
                roundNumbers[j] = sumOfAllRoundNumbers[i] - reminders;
                noOfSummands++;
                j++;
            }
            sumOfAllRoundNumbers[i] = reminders;
        }

        printf("%d\n", noOfSummands);
        int sum = 0;
        for (int k = 0; k < noOfSummands - 1; k++)
        {
            sum += roundNumbers[k];
        }

        roundNumbers[noOfSummands - 1] = reservedSumOfAllRoundNumbers - sum;

        for (int k = 0; k < noOfSummands; k++)
        {
            printf("%d ", roundNumbers[k]);
        }
        printf("\n");
        noOfSummands = 1;
    }

    return 0;
}

//time-complexity -> O(n*m)