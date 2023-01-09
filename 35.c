#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void bubble(int array[],int n);
int main()
{
    int n,in[3];
    while(scanf("%d",&n)!=EOF)
    {
        while(n--)
        {
            int total=0;
            for(int i=0; i<3; i++)
                scanf("%d",&in[i]);
            int pr[in[2]];
            for(int i=0; i<in[2]; i++)
                scanf("%d",&pr[i]);
            bubble(pr,in[2]);
            for(int i=0; i<in[1]; i++)
                total+=pr[i];
            if(total<=in[0])
                printf("%d\n",total);
            else
                printf("Impossible\n");
        }
    }
}
void bubble(int array[],int n)
{
    {
        int i, j, tmp;

        for (i = 0; i < n; i++)
        {
            for (j = 1; j < n; j++)
            {
                if (array[j - 1] > array[j])
                {
                    tmp = array[j - 1];
                    array[j - 1] = array[j];
                    array[j] = tmp;
                }
            }
        }
    }
}
