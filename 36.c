#include<stdio.h>

int main(){
    int year,flag=0;
    scanf("%d",&year);
    if(year%4==0 && year%100!=0){
        flag=1;
    }
    if(year%400==0){
        flag=1;
    }
    if(flag){
        printf("Bissextile Year\n");
    }
    else
        printf("Common Year\n");



}
