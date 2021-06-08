#include <stdio.h>

int main()
{
    int noOfTestCases;
    scanf("%d", &noOfTestCases);

    int testCases[noOfTestCases][2];

    for (int i = 0; i < noOfTestCases; i++)
    {
        int noOfMoves = 0;
        scanf("%d %d", &testCases[i][0], &testCases[i][1]);
        int difference = (testCases[i][0] > testCases[i][1])
                             ? testCases[i][0] - testCases[i][1]
                             : testCases[i][1] - testCases[i][0];

        if (difference != 0)
        {
            noOfMoves += difference / 10;
            noOfMoves += (difference % 10 != 0) ? 1 : 0;
        }

        printf("%d\n", noOfMoves);
    }
    return 0;
}

//time-complexity -> O(n)
//problem-link -> https://codeforces.com/problemset/problem/1409/A