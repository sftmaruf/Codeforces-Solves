#include <stdio.h>
#include <string.h>

int main()
{
    char equation[101], temp;

    scanf("%s", &equation);

    for (int i = 0; i < strlen(equation); i += 2)
    {
        for (int j = i + 2; j < strlen(equation); j += 2)
        {
            if ((int)equation[i] > (int)equation[j])
            {
                temp = equation[i];
                equation[i] = equation[j];
                equation[j] = temp;
            }
        }
    }
    printf("%s", equation);
}