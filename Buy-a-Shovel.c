#include <stdio.h>

int main()
{
    int perPriceOfShovel;
    int denominateCoin;
    int shovelPrice;
    int shovelPriceWithoutDenominateCoin;
    int quantity = 1;

    scanf("%d %d", &perPriceOfShovel, &denominateCoin);
    shovelPrice = shovelPriceWithoutDenominateCoin = perPriceOfShovel;

    if (shovelPrice % 10 == 0)
    {
        quantity++;
    }
    else
    {
        while (shovelPrice % 10 != 0 && shovelPriceWithoutDenominateCoin % 10 != 0)
        {
            shovelPrice = perPriceOfShovel * quantity;
            shovelPriceWithoutDenominateCoin = shovelPrice - denominateCoin;
            quantity++;
        }
    }

    printf("%d", --quantity);
    return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/732/A
//time-complexity -> O(n)