/*
  recurreence.c
  953300 岡山　紘大
  2019.6.12
*/

#include<stdio.h>

int main(void){
    long a=1;
    int kaisuu=0;
   
    while(1){
        printf("input number: ");
        scanf("%d",&kaisuu); //計算回数を入力
        if(kaisuu>0) break;
        else printf("1以上の整数を入力してください。\n"); //回数が1未満ならループ
    }
    
    for(int i=0;i<kaisuu;i++){
        printf("%ld\n",a);
        a=3*a+2;
    }
    
    return 0;
}
