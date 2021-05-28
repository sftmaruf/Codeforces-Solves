#include<stdio.h>
#include<string.h>
int main()
{
    int bound,i;
    scanf("%d",&bound);
    char w[bound][101];
    int len[bound];

    for(i=0 ; i<bound ; i++)
    {
        scanf("%s[^\n]",w[i]);
    }

    for(i=0 ; i<bound ; i++)
    {
        len[i] = strlen(w[i]);
        if(len[i]>10)
        {
            printf("%c%d%c\n",w[i][0],len[i]-2,w[i][len[i]-1]);
        }
        else
        {
            puts(w[i]);
        }

    }

    return 0;
}
