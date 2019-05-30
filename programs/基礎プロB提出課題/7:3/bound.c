/*
  bound.c
  953300 岡山　紘大
  2019.7.3
*/

#include<stdio.h>
#include<handy.h>

int main(void){
    int x=50,y=50,lay=0,windowsize=400,r=50,speedx=5,speedy=3;
    doubleLayer layers;
    
    HgOpen(windowsize, windowsize);
    layers=HgWAddDoubleLayer(0); //ダブルレイヤ
    
    while(1){
        lay=HgLSwitch(&layers); 
        HgLClear(lay);
        HgWCircle(lay,x, y, r);
        
        if(x>windowsize-r||x<r) //円のX座標ウィンドウサイズ-半径より大きいか0より小さいならベクトルに-1をかける
        {
            speedx*=-1;
        }
        if(y>windowsize-r||y<r)//円のY座標ウィンドウサイズ-半径より大きいか0より小さいならベクトルに-1をかける
        {
            speedy*=-1;
        }
        x+=speedx;
        y+=speedy;
        HgSleep(0.05);
    
    }
    return 0;
    
}
