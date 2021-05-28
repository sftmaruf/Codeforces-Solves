#include <stdio.h>

int main()
{
    int nOfTestCase, nOfCandies;
    scanf("%d", &nOfTestCase);
    for (int i = 0; i < nOfTestCase; i++)
    {
        scanf("%d", &nOfCandies);
        nOfCandies % 2 != 0
            ? printf("%d\n", nOfCandies / 2)
            : printf("%d\n", (nOfCandies / 2) - 1);
    }
    return 0;
}

//time-complexity -> O(n)
