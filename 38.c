#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int cost;
    float s=0,ns=0,n[5][3]={{120,2.1,2.1},{210,3.02,2.68},{170,4.39,3.61},{200,4.97,4.01},{0,5.63,4.5}};
    while(scanf("%d",&cost)!=EOF){
        for(int i=0;i<5;i++){
            if(cost>n[i][0] & i!=4){
                s+=n[i][0]*n[i][1];
                ns+=n[i][0]*n[i][2];
            }
            else{
                s+=cost*n[i][1];
                ns+=cost*n[i][2];
            }
            cost-=n[i][0];
            if(cost<=0)
                break;
        }
        printf("Summer months:%.2f\n",s);
        printf("Non-Summer months:%.2f\n",ns);
    }
}
