#include <stdio.h>

int main()
{
    int numbers[4];
    scanf("%d %d %d %d", &numbers[0], &numbers[1], &numbers[2], &numbers[3]);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3 - i; j++)
        {
            if (numbers[j] < numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    for (int i = 1; i < 4; i++)
    {
        printf("%d ", numbers[0] - numbers[i]);
    }

    return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/1154/A
//time-complexity -> O(n^2) + O(4)