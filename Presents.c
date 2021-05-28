#include <stdio.h>

int main()
{
    int friendsQuantity, giftGivenFriendNumber[100],
        giftRecevierNumber[100], temp;

    scanf("%d", &friendsQuantity);
    for (int i = 1; i <= friendsQuantity; i++)
    {
        scanf("%d", &giftGivenFriendNumber[i]);
        giftRecevierNumber[giftGivenFriendNumber[i]] = i;
        
    }

    for (int i = 1; i <= friendsQuantity; i++)
    {
        printf("%d ", giftRecevierNumber[i]);
    }

    return 0;
}

//time-complexity -> O(n*m)