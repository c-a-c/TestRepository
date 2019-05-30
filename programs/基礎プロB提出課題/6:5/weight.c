/*
  weight.c
  953300 岡山　紘大
  2019.6.5
*/


#include <stdio.h>

int main(void){
    int hight=0,weight=0,zou=0,gen=0;
    
    printf("身長: ");
    scanf("%d",&hight); //身長を入力
    printf("体重: ");
    scanf("%d",&weight); //体重を入力
    
    zou=(hight-105)*1.1; //太り過ぎの時の体重
    gen=(hight-105)*0.9; //やせすぎの時の体重
    
    if(zou<weight){
        printf("太り過ぎです。\n");
    }
    else if(gen>weight){
        printf("やせ過ぎです。\n");
    }
    else {
        printf("ちょうどよいです。\n");
    }
    
    return 0;
}
