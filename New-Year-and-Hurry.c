#include <stdio.h>

int main()
{
    float totalTime;
    int numberOfProblems, numberOfMinutes,
        problemSolvingTime = 0, numberOfSolvedProblem;

    scanf("%d %d", &numberOfProblems, &numberOfMinutes);
    numberOfMinutes = (20 * 60) + numberOfMinutes;

    for (int i = 1; i <= numberOfProblems; i++)
    {
        problemSolvingTime += (i * 5);
        totalTime = (float)(numberOfMinutes + problemSolvingTime) / 60;
        if (totalTime > 24)
        {
            numberOfSolvedProblem = i - 1;
            break;
        }
        else
        {
            numberOfSolvedProblem = i;
        }
    }

    printf("%d", numberOfSolvedProblem);
    return 0;
}