/*
max.c
953300 岡山 紘大
2019.6:26
*/

#include <stdio.h>

int main(void){
    int array[100];
    int kazu=0,max=0;
    
    scanf("%d",&kazu); //データの数を入力
    
    for(int i=0;i<kazu;i++) //データを入力
    {
        scanf("%d",&array[i]);
    }
    
    max=array[0];//仮の最大値を指定
    
    if(kazu>1)
    {
        for(int i=0;i<kazu-1;i++) 
        {
            if(max<array[i+1]) //仮の最大値よりデータが大きかったら入れ替え
            {
                max=array[i+1];
            }
        }
    }
    printf("max value = %d\n",max);
    return 0;
}
