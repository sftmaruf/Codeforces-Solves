#include <stdio.h>

void printSuitableArray(int bound)
{
    int result = 0;
    for (int i = bound; i > 0; i -= 2)
    {
        printf("%d ", i);
        result += i;
    }

    int j = 1;
    int temp = j;
    for (int i = 0; i < (bound / 2) - 2; i++)
    {
        printf("%d ", j);
        j += 2;
        temp += j;
    }

    printf("%d ", j);
    printf("%d\n", result - temp);
}

int main()
{
    int numberOfTestCase;
    scanf("%d", &numberOfTestCase);
    int testCases[numberOfTestCase];
    for (int i = 0; i < numberOfTestCase; i++)
    {
        scanf("%d", &testCases[i]);
        if ((testCases[i] / 2) % 2 != 0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
            printSuitableArray(testCases[i]);
        }
    }

    return 0;
}