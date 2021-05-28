#include <stdio.h>

int main()
{
    int numberOfDollar, numberOfBills = 0;
    scanf("%d", &numberOfDollar);

    while (numberOfDollar)
    {
        if (numberOfDollar >= 100)
        {
            numberOfBills += numberOfDollar / 100;
            numberOfDollar = numberOfDollar % 100;
        }

        if (numberOfDollar >= 20)
        {
            numberOfBills += numberOfDollar / 20;
            numberOfDollar = numberOfDollar % 20;
        }

        if (numberOfDollar >= 10)
        {
            numberOfBills += numberOfDollar / 10;
            numberOfDollar = numberOfDollar % 10;
        }

        if (numberOfDollar >= 5)
        {
            numberOfBills += numberOfDollar / 5;
            numberOfDollar = numberOfDollar % 5;
        }

        if (numberOfDollar < 5)
        {
            numberOfBills += numberOfDollar;
            numberOfDollar = 0;
        }
    }

    printf("%d", numberOfBills);
    return 0;
}