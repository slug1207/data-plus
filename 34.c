#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    float a;
    int b;
    while(scanf("%f %d",&a,&b)!=EOF){
        if(b==1){
            float ans =(a-80)*0.7;
            printf("%.1f\n",ans);
        }

        else{
                float ans=(a-70)*0.6;
            printf("%.1f\n",ans);
        }

    }
}
