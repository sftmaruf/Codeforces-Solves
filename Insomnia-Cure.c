#include <stdio.h>

int main()
{
    int fightingDragonInformation[5], nOfDamagedDragon = 0, isBiggerThanTotal = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &fightingDragonInformation[i]);
    }

    char isDamagedDragon[(fightingDragonInformation[4] + 1)];
    for (int i = 1; i <= fightingDragonInformation[4]; i++)
    {
        isDamagedDragon[i] = 'f';
    }

    for (int i = 0; i < 5; i++)
    {
        if (fightingDragonInformation[i] == 1)
        {
            printf("%d", fightingDragonInformation[4]);
            return 0;
        }

        if(fightingDragonInformation[i] > fightingDragonInformation[4]){
            isBiggerThanTotal++;
        }

        if(isBiggerThanTotal == 4){
            printf("%d", 0);
            return 0;
        }

        for (int j = fightingDragonInformation[i]; j <= fightingDragonInformation[4]; j += fightingDragonInformation[i])
        {
            if (fightingDragonInformation[i] * 2 <= fightingDragonInformation[4])
            {
                isDamagedDragon[j] = 't';
            }
        }
    }

    for (int i = 1; i <= fightingDragonInformation[4]; i++)
    {
        if (isDamagedDragon[i] == 't')
        {
            nOfDamagedDragon++;
        }
    }

    printf("%d\n", nOfDamagedDragon);
    return 0;
}

//time-complxity -> O(n*m)

// . 2 3 4 5 6 . 8 9 10 . 12 . 14 15 16 . 18 . 20 21 22 . 24

// 2  4 6 8 10 12 14 16 18 20 22 24
// 3 6 9 12 15 18 21 24
// 4 8 12 16 20 24
// 5 10 15 20

// 2 4 6 8 10 12 14 16 18 20 22 24
// 3 6 9 12 15 18 21 24
// 4 8 12 16 20 24
// 5 10 15 20
