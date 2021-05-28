#include<stdio.h>
int main()
{
    int bound,count=0;
    scanf("%d", &bound);
    int input[bound][10001],store[bound];

    for(int i=0; i<bound; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d",&input[i][j]);
            store[i] = 0;
        }
    }

    for(int i=0; i<bound; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(input[i][j] == 1){
                store[i] += 1;
            }
        }
        if(2 <= store[i])
        {
            count++;
        }
    }

    printf("%d",count);
    return 0;
}
