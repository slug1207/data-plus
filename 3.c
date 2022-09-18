#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x,y,tmp;
    scanf("%d%d",&x,&y);
    tmp = x*x + y*y;
    if(tmp<=10000){
        printf("inside\n");
    }
    else{
        printf("outside\n");
    }
    return 0;
}

