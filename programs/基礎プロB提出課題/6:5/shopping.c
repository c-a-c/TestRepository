/*
  shopping.c
  953300 岡山　紘大
  2019.6.5
 */


#include <stdio.h>

int main(void){
    int money=0,price=0,kosuu=0;
    
    printf("手持ちの金額: ");
    scanf("%d",&money);//手持ちの金額を入力
    printf("単価: ");
    scanf("%d",&price);//単価を入力
    printf("個数: ");
    scanf("%d",&kosuu);//個数を入力
    
    if(money-(price*kosuu)<0)  //手持ちの金額が単価*個数より少なかったら
    {
        printf("買えない。%dこまでなら買える。",money/price);
    }
    
    else //手持ちの金額が単価*個数より多かったら
    {
        printf("買える。お釣りは%d円。\n",money-price*kosuu);
    }
    return 0;
}
