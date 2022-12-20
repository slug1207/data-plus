#include<stdio.h>

int main(void)
{
    int i,j,n,m,count = 0;
    scanf("%d %d",&n,&m);
    int num[n][m];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            scanf("%d",&num[i][j]);
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            count++;
            printf("%d",num[j][i]);
            if(count%n!=0)
            {
                printf(" ");
            }
        }
        printf("\n");

    }

    return 0;
}
