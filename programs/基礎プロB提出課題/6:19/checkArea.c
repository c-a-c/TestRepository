/*
  cheeckArea.c
  953300 岡山　紘大
  2019.6.19
*/

#include <stdio.h>
#include <handy.h>

int main(void){
    int x=0,y=0;
    printf("x: ");
    scanf("%d",&x); //円の中心X
    
    printf("y: ");
    scanf("%d",&y);//円の中心Y
    
    HgOpen(600, 400);
    HgBox(150, 100, 300, 200);
    
    if(150<x&&x<450&&100<y&&y<300) //円の中心が長方形の内側なら赤色にする
    {
        HgSetFillColor(HG_RED);
    }
    else HgSetFillColor(HG_BLUE); //それ以外なら青色
    HgCircleFill(x, y, 50, 1);

    HgGetChar();
    return 0;
}
