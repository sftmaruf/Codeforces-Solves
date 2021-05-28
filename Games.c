#include <stdio.h>

int main()
{
    int nOfTeam, nOfGamesInGuestUni = 0;
    scanf("%d", &nOfTeam);
    int jerseyColors[nOfTeam][2];

    for (int i = 1; i <= nOfTeam; i++)
    {
        scanf("%d %d", &jerseyColors[i][0], &jerseyColors[i][1]);
    }

    for (int i = 1; i <= nOfTeam; i++)
    {
        for (int j = 1; j <= nOfTeam; j++)
        {
            if (i != j)
            {
                if (jerseyColors[i][0] == jerseyColors[j][1])
                {
                    nOfGamesInGuestUni++;
                }
            }
        }
    }

    printf("%d", nOfGamesInGuestUni);
    return 0;
}

//time-complexity -> O(n^2)