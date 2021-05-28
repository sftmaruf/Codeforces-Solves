#include <stdio.h>

int main()
{
    int nOfRoom, peopleExistedIntheRoom,
        capacityOfTheRoom, countIdealRoom = 0;

    scanf("%d", &nOfRoom);
    for (int i = 0; i < nOfRoom; i++)
    {
        scanf("%d %d", &peopleExistedIntheRoom, &capacityOfTheRoom);
        if((capacityOfTheRoom - peopleExistedIntheRoom) >= 2 ){
            countIdealRoom++;
        } 
    }

    printf("%d", countIdealRoom);
    return 0;
}

//time-complexity -> O(n)