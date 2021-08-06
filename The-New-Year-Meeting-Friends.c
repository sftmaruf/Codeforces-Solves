#include <stdio.h>
#include <stdlib.h>

int main()
{
    int firstHouseCordinates, secondHouseCordinates, thirdHouseCordinates,
        distances[3], minimumDistance;
    scanf("%d %d %d", &firstHouseCordinates, &secondHouseCordinates, &thirdHouseCordinates);
    distances[0] = abs(firstHouseCordinates - secondHouseCordinates) + abs(firstHouseCordinates - thirdHouseCordinates);
    distances[1] = abs(secondHouseCordinates - firstHouseCordinates) + abs(secondHouseCordinates - thirdHouseCordinates);
    distances[2] = abs(thirdHouseCordinates - firstHouseCordinates) + abs(thirdHouseCordinates - secondHouseCordinates);
    
    if(distances[0] < distances[1] && distances[0] < distances[2] ){
        minimumDistance = distances[0];
    }else if(distances[1] < distances[0] && distances[1] < distances[2]){
        minimumDistance = distances[1];
    }else{
        minimumDistance = distances[2];
    }
    printf("%d", minimumDistance);
    return 0;
}