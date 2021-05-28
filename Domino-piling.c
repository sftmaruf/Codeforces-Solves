#include <stdio.h>

int main()
{
    int height, width;

    scanf("%d %d", &height, &width);
    printf("%d", (height * width) / 2);
    return 0;
}

/*First soluton
int main(){
    int height, width, area, quantityOfDomino = 0;

    scanf("%d %d", &height, &width);
    area = height * width;
    
    while(area > 1){
        quantityOfDomino++;
        area -= 2;
    }
    printf("%d", quantityOfDomino);
    return 0;
}*/