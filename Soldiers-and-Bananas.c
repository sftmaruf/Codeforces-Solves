#include <stdio.h>

int main()
{
    int costOfFirstBanana, initialDollars, numberOfBananas, totalCost = 0;
    scanf("%d %d %d", &costOfFirstBanana, &initialDollars, &numberOfBananas);

    for (int i = 1; i <= numberOfBananas; i++)
    {
        totalCost += costOfFirstBanana * i;
    }

    totalCost > initialDollars
        ? printf("%d", totalCost - initialDollars)
        : printf("%d", 0);
    return 0;
}