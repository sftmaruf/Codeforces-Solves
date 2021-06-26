#include <stdio.h>

int isCompositeNumber(int number)
{
    int result;
    int range = number > 10 ? 10 : number;
    for (int i = 2; i < range; i++)
    {
        if ((number % i) == 0)
        {
            result = number / i;
            if (result < number)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int number;
    scanf("%d", &number);
    int number1, number2;

    for (int i = 4; i < number; i++)
    {
        if (isCompositeNumber(i) == 1)
        {
            number1 = i;
            for (int j = number; j > 4; j--)
            {
                if (isCompositeNumber(j) == 1)
                {
                    number2 = j;
                    if ((number1 + number2) == number)
                    {
                        printf("%d %d", number1, number2);
                        i = number;
                        break;
                    }
                }
            }
        }
    }

    return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/472/A
//time-complexity -> O(n^2 * m^2)