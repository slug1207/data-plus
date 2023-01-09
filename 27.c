#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int a[4],ans,input,a2[4];
    scanf("%d",&ans);
    getchar();
    for(int i=3;i>=0;i--){
        a[i]=ans%10;
        ans/=10;
    }
    while(scanf("%d",&input)!=EOF){
        if(input==0000)
            break;
        for(int i=3;i>=0;i--){
            a2[i]=input%10;
            input/=10;
        }
        int as=0,bs=0;
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(a[i]==a2[j] && i==j)
                    as++;
                if(a[i]==a2[j] && i!=j)
                    bs++;
            }
        }
        printf("%dA%dB\n",as,bs);
    }
 }
