#include <stdio.h>

int main()
{
    int noOfTestCases;
    int lengthOfArray;
    int finalArrayLength = 0;
    scanf("%d", &noOfTestCases);

    for (int i = 0; i < noOfTestCases; i++)
    {
        scanf("%d", &lengthOfArray);
        int testCases[lengthOfArray];
        for (int j = 0; j < lengthOfArray; j++)
        {
            scanf("%d", &testCases[j]);
        }

        for (int j = 0; j < lengthOfArray; j++)
        {
            for (int k = j + 1; k < lengthOfArray; k++)
            {
                if (testCases[j] > testCases[k])
                {
                    int temp = testCases[k];
                    testCases[k] = testCases[j];
                    testCases[j] = temp;
                }
            }
        }

        for (int j = 0; j < lengthOfArray; j++)
        {
            if(j > 0){
                if(testCases[j] - testCases[j-1] <= 1){
                    finalArrayLength++;
                }
            }
        }

        lengthOfArray -= finalArrayLength;
        lengthOfArray == 1 ? printf("YES\n") : printf("NO\n");
        finalArrayLength = 0;
    }

    return 0;
}

//time-complexity -> O(n^2) 
//problem-link -> https://codeforces.com/problemset/problem/1399/A