#include <stdio.h>

int main()
{
    int nOfParticipant, decision;
    
    scanf("%d", &nOfParticipant);
    for (int i = 0; i < nOfParticipant; i++)
    {
        scanf("%d", &decision);
        if (decision == 1)
        {
            printf("HARD");
            return 0;
        }
    }
    printf("EASY");
    return 0;
}

//time-complexity -> O(n)
