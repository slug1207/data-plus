#include<stdio.h>

int main(){
    int a,b,r;
    scanf("%d %d",&a,&b);
    do
    {
        r = a;
        a = b;
        b = r%a;
    }while(b);
    printf("%d\n",a);
    return 0;

}
