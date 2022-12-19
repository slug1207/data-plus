#include<stdio.h>

int main(){
    int starth = 0,startm = 0,endh = 0,endm = 0;
    int time =0;
    scanf("%d %d",&starth,&startm);
    scanf("%d %d",&endh,&endm);
    time =(endh - starth)*60 + (endm - startm);
    if(time<=120 && time>=0){
        printf("%d\n",(time/30)*30);
    }
    else if(time>120 && time<=240){
        printf("%d\n",(time-120)/30*40+120);
    }
    else{
        printf("%d\n",(time-240)/30*60+280);
    }
    return 0;
}
