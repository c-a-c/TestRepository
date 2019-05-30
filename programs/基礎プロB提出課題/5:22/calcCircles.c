
/*
calcCircles.c
2019.5.22
953300 Kodai Okayama
 */

#include <stdio.h>
#include <handy.h>


int main(void){
    HgOpen(400, 400);
    int hankei1=0;//中ぐらいの円の半径
    int hankei2=0;//一番小さい円の半径
    HgCircle(240,210,120);//一番大きい円
    hankei1=120*2/3;
    hankei2=hankei1/2;
    HgCircle(240-120+hankei1,210,hankei1);
    HgCircle(240-120+hankei1*2+hankei2,210,hankei2);
    HgGetChar();
    
    return 0;
}

