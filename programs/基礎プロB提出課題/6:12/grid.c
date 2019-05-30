/*
  grid.c
  953300 岡山　紘大
  2019.6.12
*/

#include <stdio.h>
#include <handy.h>

int main(void){
    int kazu=0,zahyou=0,size=0;
    
    printf("数値: ");
    scanf("%d",&kazu); //マスの数を入力
    
    size=600/kazu; //マス一つの大きさ
    
    HgOpen(600,600);
    HgBox(0, 0, 600, 600);
    for(int i=0;i<kazu-1;i++) //横の線を引く
    {
        zahyou+=size;
        HgLine(0, zahyou, 600, zahyou);
    }
    
    zahyou=0; 
    
    for(int i=0;i<kazu-1;i++) //縦の線を引く
    {
        zahyou+=size;
        HgLine(zahyou, 0, zahyou, 600);
    }
    
    HgGetChar();
    
    return 0;
}
