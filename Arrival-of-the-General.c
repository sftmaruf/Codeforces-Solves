#include <stdio.h>

int main()
{
    int nOfSoldier, maxHeight = 0,
                    minHeight = 101, minHeightIndex, maxHeightIndex;

    scanf("%d", &nOfSoldier);
    int soldiersHeight[nOfSoldier];

    for (int i = 0; i < nOfSoldier; i++)
    {
        scanf("%d", &soldiersHeight[i]);

        if (maxHeight < soldiersHeight[i])
        {
            maxHeight = soldiersHeight[i];
            maxHeightIndex = i;
        }

        if (minHeight >= soldiersHeight[i])
        {
            minHeight = soldiersHeight[i];
            minHeightIndex = i;
        }
    }

    if (minHeightIndex < maxHeightIndex )
    {
        maxHeightIndex--;
    }

    // if (maxHeight == soldiersHeight[0])
    // {
    //     maxHeightIndex = 0;
    // }

    // if (minHeight == soldiersHeight[nOfSoldier - 1])
    // {
    //     minHeightIndex = nOfSoldier - 1;
    // }

    printf("%d", (maxHeightIndex + ((nOfSoldier - 1) - minHeightIndex)));
    return 0;
}

//time-complexity -> O(n)