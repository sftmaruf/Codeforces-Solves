#include <stdio.h>
#include <stdbool.h>

int main()
{
    int row, col;
    bool rightCurve = false;
    scanf("%d %d", &row, &col);

    for (int rowIndex = 0; rowIndex < row; rowIndex++)
    {
        for (int colIndex = 0; colIndex < col; colIndex++)
        {

            if (rowIndex % 2 == 0)
            {
                printf("#");
            }
            else
            {
                if (!rightCurve)
                {
                    if ((col - colIndex) != 1)
                    {
                        printf(".");
                    }
                    else
                    {
                        printf("#");
                        rightCurve = true;
                    }
                }
                else
                {
                    if (colIndex != 0)
                    {
                        printf(".");
                        if ((col - colIndex) == 1)
                        {
                            rightCurve = false;
                        }
                    }
                    else
                    {
                        printf("#");
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}