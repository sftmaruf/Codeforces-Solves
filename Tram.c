#include <stdio.h>

int main()
{
    int stops, nOfEntry, nOfExit,
        minimumPossibleCapacity = 0, tempMinimumPossibleCapacity = 0;

    scanf("%d", &stops);

    for (int i = 0; i < stops; i++)
    {
        scanf("%d %d", &nOfExit, &nOfEntry);
        if (i == 0)
        {
            tempMinimumPossibleCapacity += nOfEntry;
        }
        else
        {
            tempMinimumPossibleCapacity -= nOfExit;
            tempMinimumPossibleCapacity += nOfEntry;
        }

        if (minimumPossibleCapacity < tempMinimumPossibleCapacity)
        {
            minimumPossibleCapacity = tempMinimumPossibleCapacity;
        }
    }

    printf("%d", minimumPossibleCapacity);
    return 0;
}