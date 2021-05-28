#include <stdio.h>
#include <stdbool.h>

int main()
{
    int coordinate, count = 0;
    bool flag = true;

    scanf("%d", &coordinate);
    count = coordinate / 5;
    coordinate %= 5;

    coordinate != 0
        ? printf("%d", count + 1)
        : printf("%d", count);
    return 0;
}

// int main()
// {
//     int coordinate, count = 0;
//     bool flag = true;

//     scanf("%d", &coordinate);
//     while (flag)
//     {
//         if (coordinate >= 5)
//         {
//             coordinate -= 5;
//             count++;
//         }
//         else if (coordinate >= 4)
//         {
//             coordinate -= 4;
//             count++;
//         }
//         else if (coordinate >= 3)
//         {
//             coordinate -= 3;
//             count++;
//         }
//         else if (coordinate >= 2)
//         {
//             coordinate -= 2;
//             count++;
//         }
//         else
//         {
//             coordinate -= 1;
//             count++;
//         }

//         if(coordinate == 0){
//             flag = false;
//         }
//     }

//     printf("%d", count);
//     return 0;
// }