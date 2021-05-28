#include <stdio.h>

int main()
{
    int nOfLayer, currentLayers, layerPosition = 1;

    scanf("%d", &nOfLayer);
    currentLayers = nOfLayer;
    for (int i = 0; i < nOfLayer; i++)
    {
        if (layerPosition == 1)
        {
            if (currentLayers == 1)
            {
                printf("I hate it ");
                break;
            }
            printf("I hate that ");
        }
        else if (layerPosition == 2)
        {
            if (currentLayers == 1)
            {
                printf("I love it ");
                break;
            }
            printf("I love that ");
            layerPosition = 0;
        }        layerPosition++;
        currentLayers--;
    }
    return 0;
}

//time-complexity -> O(n)