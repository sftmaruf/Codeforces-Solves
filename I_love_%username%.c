#include <stdio.h>

int main(){
    int numberOfContest, numberOfAmazingContest = 0;
    scanf("%d", &numberOfContest);

    int contestPoints[numberOfContest], bestPoint, worstPoint;
    for (int i = 0; i < numberOfContest; i++)
    {
        scanf("%d", &contestPoints[i]);
        if(i == 0){
            bestPoint = worstPoint = contestPoints[0];
        }else{
            if(contestPoints[i] > bestPoint){
                bestPoint = contestPoints[i];
                ++numberOfAmazingContest;
            }

            if(contestPoints[i] < worstPoint){
                worstPoint = contestPoints[i];
                ++numberOfAmazingContest;
            }
        }
    }
    printf("%d", numberOfAmazingContest);
    return 0;
}

//time-complexity: worstcase -> O(n), bestcase -> O(1)