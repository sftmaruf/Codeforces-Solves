#include <stdio.h>
#include <string.h>

int main()
{
    int nOfMagnets, groupsCount = 0;
    scanf("%d", &nOfMagnets);
    char magnets[nOfMagnets], reservePolarCharge = 2;

    for (int i = 0; i < nOfMagnets; i++)
    {
        scanf("%s", &magnets);
        if (reservePolarCharge != magnets[1])
        {
            groupsCount++;
        }
        reservePolarCharge = magnets[1];
    }
    printf("%d", groupsCount);
    return 0;
}

//time0-complexity -> O(n)

// int main()
// {
//     int nOfMagnets, groupsCount = 0;
//     scanf("%d", &nOfMagnets);
//     char magnets[nOfMagnets][2];

//     for (int i = 0; i < nOfMagnets; i++)
//     {
//         for (int j = 0; j < 1; j++)
//         {
//             scanf("%s", &magnets[i][j]);
//         }
//     }

//     for (int i = 0; i < nOfMagnets - 1; i++)
//     {
//         if(magnets[i][1] == magnets[i+1][0]){
//             groupsCount++;
//         }
//     }

//     printf("%d\n", ++groupsCount);
//     return 0;
// }

//time0-complexity -> O(n^2) + n