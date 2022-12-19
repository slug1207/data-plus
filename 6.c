#include<stdio.h>

int main(){
    int month;
    scanf("%d",&month);
    if(month>=3 && month<=5){
        printf("Spring\n");
    }
    if(month>5 && month<=8){
        printf("Summer\n");
    }
    if(month>8 && month<=11){
        printf("Autumn\n");
    }
    if(month ==12 || (month<=2 && month >0)){
        printf("Winter\n");
    }
    return 0;


}
