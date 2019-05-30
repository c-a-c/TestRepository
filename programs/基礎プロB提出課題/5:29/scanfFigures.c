/*
  scanfFigures.c
  953300 岡山　紘大
  2019.5.29
 */


#include <stdio.h>
#include <handy.h>

int main(void){
    double x=0,y=0,r=0,shitax=0,shitay=0;
    
    printf("中心X: ");
    scanf("%lf",&x);//円の中心のX座標を入力する
    
    printf("中心Y: ");
    scanf("%lf",&y);//円の中心のY座標を入力する
    
    printf("半径: ");
    scanf("%lf",&r);//円の半径を入力する
    
    shitax=x-r;//正方形の左下のX座標
    shitay=y-r;//正方形の左下のY座標
    
    printf("正方形の左下の座標は(%.0lf, %.0lf)\n",shitax,shitay);
    
    HgOpen(400,400);
    HgCircle(x, y, r);//円を描く
    HgBox(shitax, shitay, r*2, r*2);//正方形を描く
    HgLine(shitax,shitay,x+r,y+r);//左上から右下への線を描く
    HgLine(shitax,shitay+r*2,shitax+r*2,shitay);//右上から左下への線を描く
    HgGetChar();
    
    return 0;
}
