#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int A[10],a=0,flag=0;
    while(scanf("%d",&A[a])!=EOF & a<8)
        a++;
    if((A[0]+A[1]+A[2])==3 || (A[0]+A[1]+A[2])==0)
        printf("True\n");
    else if((A[3]+A[4]+A[5])==3 || (A[3]+A[4]+A[5])==0)
        printf("True\n");
    else if((A[6]+A[7]+A[8])==3 || (A[6]+A[7]+A[8])==0)
        printf("True\n");
    else if((A[0]+A[3]+A[6])==3 || (A[0]+A[3]+A[6])==0)
        printf("True\n");
    else if((A[1]+A[4]+A[7])==3 || (A[1]+A[4]+A[7])==0)
        printf("True\n");
    else if((A[2]+A[5]+A[8])==3 || (A[2]+A[5]+A[8])==0)
        printf("True\n");
    else if((A[0]+A[4]+A[8])==3 || (A[0]+A[4]+A[8])==0)
        printf("True\n");
    else if((A[2]+A[4]+A[6])==3 || (A[2]+A[4]+A[6])==0)
        printf("True\n");
    else
        printf("False\n");

}
