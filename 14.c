#include<stdio.h>

int main(){
    char a[100];
    scanf("%s",&a);
    int len = strlen(a);
    int flag = 0;
    for(int i = 0;i<len;i++){
        if(a[i]!=a[len-i-1]){
            flag = 1;
        }
    }
    if(flag!=1){
        printf("YES\n");
    }
    else
        printf("NO\n");



}
