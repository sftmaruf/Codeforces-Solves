#include <stdio.h>

int main()
{
    int nOfOrangeJuice;
    float vFractionOfFinalDrink = 0;
    scanf("%d", &nOfOrangeJuice);
    int volFraction[nOfOrangeJuice];
    for (int i = 0; i < nOfOrangeJuice; i++)
    {
        scanf("%d", &volFraction[i]);
        vFractionOfFinalDrink += volFraction[i];
    }

    printf("%.12f", vFractionOfFinalDrink / nOfOrangeJuice);
    return 0;
}