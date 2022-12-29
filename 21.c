#include<stdio.h>
int main(){
     float max=0,n,min=10000;

     for(int i=0;i<10;i++){
        scanf("%f",&n);
        if(n>max)max=n;
        if(n<min)min=n;
      }
        printf("maximum:%.2f\n",max);
        printf("minimum:%.2f\n",min);
    return 0;
}
