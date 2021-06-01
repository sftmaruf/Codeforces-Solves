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

// 1. Collect all constest reslut & track the progess.
// 2. Where the participate perform is pointed by a positive number.
// 3. contest amazing: break either his and worst performance record.
// 4. contest amazing rule 1: if the point is more than any past contest.
// 5. contest amzing rule 2: if the point is less than any past contest.
// 6. coders first contest isnt considered amazing.
// 7.  1 < n < 1000