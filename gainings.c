#include <stdio.h>
int main(int arge,const char * argv[]){
    int profit = 0;
    int bonus = 0;

    scanf("%d",&profit);
//  利润低于或等于10万元，奖金可提10%
    if(profit<=100000){
        bonus =profit*0.1;
    }else if(profit<=200000){
        bonus =100000*0.1 + (profit - 100000)*0.075;
    }else if(profit<=400000){
        bonus =100000*0.1 + 100000*0.075 + (profit - 200000)*0.05;
    }else if(profit<=600000){
        bonus =100000*0.1 + 100000*0.075 + 200000*0.05 + (profit - 400000)*0.03;
    }else if(profit<=1000000){
        bonus =100000*0.1 + 100000*0.075 + 200000*0.05 + 200000*0.03 + (profit - 600000)*0.015;
    }else {
        100000*0.1 + 100000*0.075 + 200000*0.05 + 200000*0.03 + 400000*0.015 + (profit - 1000000)*0.015;
    }

    printf("bonus = %d\n",bonus);
    return 0;
}