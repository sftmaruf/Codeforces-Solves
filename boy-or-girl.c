#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int count, arrLength;
    scanf("%s", &name);

    for (int i = 0; i < strlen(name); i++)
    {
        for (int j = i + 1; j < strlen(name); j++)
        {
            printf("%d", j);
            if(name[i] == name[j]){
                for (int k = j; k < strlen(name); k++)
                {
                    name[k] = name[k + 1];
                    i = 0;
                    j = 0;
                }
            }
        }
    }

    strlen(name) % 2 == 0 ? printf("CHAT WITH HER!") : printf("IGNORE HIM!");
}