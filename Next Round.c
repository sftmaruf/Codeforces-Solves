#include<stdio.h>
int main()
{
    int n,k,a[101],count = 0;
    scanf("%d %d",&n,&k);

    if(k <= n)
    {
        for(int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }

        for(int i = 0; i < n; i++)
        {
            if(a[k-1] <= a[i] && a[i] > 0)
            {
                count++;
            }
        }
    }

    printf("%d\n",count);

    return 0;
}
