#include <stdio.h>

int main()
{
    int noTestCases;
    scanf("%d", &noTestCases);
    long long int testCases[noTestCases + 1][2];
    int countMoves[noTestCases + 1];

    for (int i = 0; i < noTestCases; i++)
    {
        countMoves[i] = 0;
        scanf("%lld %lld", &testCases[i][0], &testCases[i][1]);

        if (testCases[i][0] % testCases[i][1] == 0)
        {
            continue;
        }
        else if (testCases[i][0] < testCases[i][1])
        {
            countMoves[i] = testCases[i][1] - testCases[i][0];
            testCases[i][0] = testCases[i][1];
        }
        else if (testCases[i][0] > testCases[i][1])
        {
            countMoves[i] = (testCases[i][1] * ((testCases[i][0] / testCases[i][1]) + 1)) - testCases[i][0];
        }
    }

    for (int i = 0; i < noTestCases; i++)
    {
        printf("%d\n", countMoves[i]);
    }
    return 0;
}

//time-complexity -> O(n)