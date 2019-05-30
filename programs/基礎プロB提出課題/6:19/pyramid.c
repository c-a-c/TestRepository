/*
  pyramid.c
  953300 岡山　紘大
  2019.6.19
  下から上に向かって円を描きます
*/

#include <stdio.h>
#include <handy.h>

int main(void){
    double kazu=0,kazu2=0;
    double tyokkei=0,x=0,y=0;
    
    printf("値を入力してください: ");
    scanf("%lf",&kazu); //段数を入力
    
    kazu2=kazu; //n段目の円の個数をカウントするための変数
    tyokkei=(600/kazu); //円の直径
    y=tyokkei/2; //一番下の円のY座標
    
    HgOpen(600, 600);
    
    for(int i=0;i<kazu;i++)
    {
        x=tyokkei/2; //一番左の円のX座標
        for(int j=0;j<kazu2;j++)
        {
            HgCircle(x, y, tyokkei/2);
            x+=tyokkei; //X座標を右にずらす
        }
        kazu2-=1; //描く円の数を一つ減らす
        y+=tyokkei; //次の段のY座標にする
    }
    
    HgGetChar();
    return 0;
}
