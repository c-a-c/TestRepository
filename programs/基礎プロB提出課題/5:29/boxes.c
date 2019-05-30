/*
  boxes.c
  953300 岡山　紘大
  2019.5.29
*/


#include <stdio.h>
#include <handy.h>

int main(void){
    double x0=0,y0=0,x1=0,y1=0,habax=0,habay=0;
    
    printf("input x0: ");
    scanf("%lf",&x0);//内側の四角形の左下のX座標
    
    printf("input y0: ");
    scanf("%lf",&y0);//内側の四角形の左下のY座標
    
    printf("input x1: ");
    scanf("%lf",&x1);//内側の四角形の右上のX座標
    
    printf("input y1: ");
    scanf("%lf",&y1);//内側の四角形の右上のY座標
    
    habax=(x1-x0)/2;//内側の四角形の幅の半分
    habay=(y1-y0)/2;//内側の四角形の高さの半分
    
    HgOpen(600,600);
    
    HgBox(x0, y0, x1-x0, y1-y0);//内側の四角形を描く
    
    HgBox(x0-habax, y0-habay, habax*4, habay*4);//外側の四角形を描く

    HgLine(x0-habax, y0+habay, x0+habax, y0-habay);//ひし形の左から右上への線
    HgLine(x0-habax, y0+habay, x0+habax, y0+habay*3);//ひし形の左から右下への線
    HgLine(x0+habax, y0+habay*3, x0+habax*3, y0+habay);//ひし形の右から左上への線
    HgLine(x0+habax, y0-habay, x0+habax*3, y0+habay);//ひし形の右から左下への線
    
    HgGetChar();
    return 0;
}
