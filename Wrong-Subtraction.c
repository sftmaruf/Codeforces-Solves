#include <stdio.h>

int main()
{
    int number, counter;
    scanf("%d %d", &number, &counter);

    for (int i = 0; i < counter; i++)
    {
        number % 10 != 0
            ? (number -= 1)
            : (number /= 10);
    }

    printf("%d", number);
    return 0;
}