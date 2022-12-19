#include<stdio.h>
#include<math.h>

int main()
{
    int x;
    scanf("%d",&x);
    if(x<0)
    {
        x+=256;
    }
    int c[8];
    for(int i=0; i<8; i++)
    {
        c[7-i]=x%2;
        x/=2;
    }
    if(x<0)
    {
        for(int i = 0; i<8; i++)
        {
            if(c[i]==0)
                c[i]=1;
            else
                c[i]=0;
        }
    }
    for(int i=0; i<8; i++)
    {
        printf("%d",c[i]);
    }
    printf("\n");

    return 0;
}
