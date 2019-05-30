
/******
       forCircles.c
       色付きの円を４つ描くプログラムです。
       2019.5.15 
       953300 Kodai Okayama

 ******/

#include <stdio.h>
#include <handy.h>

int main(void){
    HgOpen(400,400);
    
    HgSetFillColor(HG_RED);//色を赤色にする。
    HgCircleFill(120, 120, 100,1);//円を描く。
    
    HgSetFillColor(HG_BLUE);//色を青色にする。
    HgCircleFill(120, 280, 100,1);//円を描く。
    
    HgSetFillColor(HG_GREEN);//色を緑色にする。
    HgCircleFill(280, 280, 100,1);//円を描く。
    
    HgSetFillColor(HG_YELLOW);//色を黄色にする。
    HgCircleFill(280, 120, 100,1);//円を描く。
    
    HgGetChar();
    
    return 0;
}
