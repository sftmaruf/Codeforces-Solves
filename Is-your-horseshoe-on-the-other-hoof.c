#include <stdio.h>

int main()
{
    int colorsOfHorseShoe[4], colorNeeded = 0;

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &colorsOfHorseShoe[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (colorsOfHorseShoe[i] == colorsOfHorseShoe[j])
            {
                colorsOfHorseShoe[j] = -1;
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        if(colorsOfHorseShoe[i] == -1){
            colorNeeded++;
        }
    }

    printf("%d", colorNeeded);
    return 0;
}

//time-complexity -> O(n^2)