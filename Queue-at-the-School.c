#include <stdio.h>
#include <string.h>

int main()
{
    int nOfChildren, time;
    char studentOrder[50], temp;

    scanf("%d %d", &nOfChildren, &time);
    scanf("%s", &studentOrder);
    while (time != 0)
    {
        for (int j = 0; j < nOfChildren; j++)
        {
            if (studentOrder[j] == 'B' && studentOrder[j + 1] == 'G')
            {
                temp = studentOrder[j + 1];
                studentOrder[j + 1] = studentOrder[j];
                studentOrder[j] = temp;
                j++;
            }
        }
        time--;
    }

    printf("%s", studentOrder);
    return 0;
}
//time-complexity - n*m / n^2
//alternative though but doesn't workout
//    for (int i = 0; i < nOfChildren; i++)
//     {
//         if (studentOrder[i] == 'B' && studentOrder[i + 1] == 'G')
//         {
//             if ((i + time) < strlen(studentOrder))
//             {
//                 temp = studentOrder[i + time];
//                 studentOrder[i + time] = studentOrder[i];
//                 studentOrder[i] = temp;
//             }
//             else
//             {
//                 temp = studentOrder[i + 1];
//                 studentOrder[i + 1] = studentOrder[i];
//                 studentOrder[i] = temp;
//             }
//         }
//     }