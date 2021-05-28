#include <stdio.h>

int main()
{
    int gameLevel, remainingLevel = 0;
    scanf("%d", &gameLevel);
    int completedLevels[2][gameLevel + 1];

    for (int row = 0; row < 2; row++)
    {
        row == 0
            ? scanf("%d", &completedLevels[row][0])
            : scanf("%d", &completedLevels[row][0]);

        for (int col = 1; col <= completedLevels[row][0]; col++)
        {
            scanf("%d", &completedLevels[row][col]);
        }
    }

    for (int firstRowPos = 1; firstRowPos <= completedLevels[0][0]; firstRowPos++)
    {
        for (int secondRowPos = 1; secondRowPos <= completedLevels[1][0]; secondRowPos++)
        {
            if (completedLevels[0][firstRowPos] == completedLevels[1][secondRowPos])
            {
                completedLevels[1][secondRowPos] = 0;
            }
        }
    }

    for (int row = 0; row < 2; row++)
    {
        for (int col = 1; col <= completedLevels[row][0]; col++)
        {
            remainingLevel += completedLevels[row][col];
        }
    }

    for (int i = gameLevel; i > 0; i--)
    {
        remainingLevel -= i;
    }

    remainingLevel == 0
        ? printf("I become the guy.")
        : printf("Oh, my keyboard!");
    return 0;
}

//time-complexity -> m * n + n *m +  2 + n * m + n -> O(n*m)