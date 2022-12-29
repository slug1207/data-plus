#include<stdio.h>

int main(){
    int mon,day;
    scanf("%d%d",&mon,&day);
    if((mon==1&&day>=21)||(mon==2&&day<=18)){
        printf("Aquarius\n");
    }
    if((mon==2&&day>=19)||(mon==3&&day<=20)){
        printf("Pisces\n");
    }
    if((mon==3&&day>=21)||(mon==4&&day<=20)){
        printf("Aries\n");
    }
    if((mon==4&&day>=21)||(mon==5&&day<=21)){
        printf("Taurus\n");
    }
    if((mon==5&&day>=22)||(mon==6&&day<=21)){
        printf("Gemini\n");
    }
    if((mon==6&&day>=22)||(mon==7&&day<=22)){
        printf("Cancer\n");
    }
    if((mon==7&&day>=23)||(mon==8&&day<=23)){
        printf("Leo\n");
    }
    if((mon==8&&day>=24)||(mon==9&&day<=23)){
        printf("Virgo\n");
    }
    if((mon==9&&day>=24)||(mon==10&&day<=23)){
        printf("Libra\n");
    }
    if((mon==10&&day>=24)||(mon==11&&day<=22)){
        printf("Scorpio\n");
    }
    if((mon==11&&day>=23)||(mon==12&&day<=21)){
        printf("Sagittarius\n");
    }
    if((mon==12&&day>=22)||(mon==1&&day<=20)){
        printf("Capricorn\n");
    }

return 0;

}
