#include <stdio.h>

int main()
{

    int numberOfRedShocks, numberOfBlueShocks,
        daysWithDifferentShocks, daysWithSameShocks = 0, numberOfSameShocks;
    scanf("%d %d", &numberOfRedShocks, &numberOfBlueShocks);

    if (numberOfRedShocks == numberOfBlueShocks)
    {
        daysWithDifferentShocks = numberOfRedShocks;
    }
    else
    {
        if (numberOfRedShocks > numberOfBlueShocks)
        {
            daysWithDifferentShocks = numberOfBlueShocks;
            numberOfSameShocks = numberOfRedShocks - numberOfBlueShocks;
        }

        if (numberOfRedShocks < numberOfBlueShocks)
        {
            daysWithDifferentShocks = numberOfRedShocks;
            numberOfSameShocks = numberOfBlueShocks - numberOfRedShocks;
        }

        while (numberOfSameShocks > 1)
        {
            daysWithSameShocks += 1;
            numberOfSameShocks -= 2;
        }
    }

    printf("%d %d", daysWithDifferentShocks, daysWithSameShocks);
    return 0;
}

//time-complexity: worst -> O(n/2), best -> O(1)