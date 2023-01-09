#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n,in[3];
    scanf("%d",&n);
    while(n--){
        int totol=0,a=0,b=0;
        for(int i=0;i<3;i++){
            scanf("%d",&in[i]);
            totol+=in[i];
            if(in[i]<60)
                a++;
            if(in[i]>=80)
                b++;
        }
        if(a==0)
            printf("P\n");
        else if((a==1) && (totol>=220))
            printf("P\n");
        else if((a==1) && (totol<220))
            printf("M\n");
        else if((a==2) && (b==1))
            printf("M\n");
        else
            printf("F\n");
    }

 }
