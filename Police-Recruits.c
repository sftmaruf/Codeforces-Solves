#include <stdio.h>

int main()
{
    int event;
    int numberOfEvent;
    int numberOfPoliceOfficer = 0;
    int numberOfUntreatedCrime = 0;

    scanf("%d", &numberOfEvent);

    for (int i = 0; i < numberOfEvent; i++)
    {
        scanf("%d", &event);
        if (event < 0)
        {
            if (numberOfPoliceOfficer > 0)
            {
                numberOfPoliceOfficer += event;
            }
            else
            {
                numberOfUntreatedCrime++;
            }
        }
        else
        {
            numberOfPoliceOfficer += event;
        }
    }

    printf("%d", numberOfUntreatedCrime);
    return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/427/A
//time-complexity -> O(n)