#include <stdio.h>
#include <string.h>

int main()
{
    int numberOfStones, numberOfNeighborStones = 0;
    char stoneColors[50];

    scanf("%d", &numberOfStones);
    scanf("%s", &stoneColors);

    for (int i = 0; i < numberOfStones; i++)
    {
        if(stoneColors[i] == stoneColors[i + 1]){
           if(i + 1 < numberOfStones){
                numberOfNeighborStones++;
           }
        }
    }
    printf("%d", numberOfNeighborStones);
    return 0;
}