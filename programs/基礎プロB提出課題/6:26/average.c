/*
average.c
953300 岡山　紘大
2019.6.26
 */

#include <stdio.h>

int main(void){
    int array[100];
    int kazu=0,average=0;
    
    printf("input number of data: ");
    scanf("%d",&kazu);
    for(int i=0;i<kazu;i++) //データを入力する
    {
        printf("input No.%d data: ",i);
        scanf("%d",&array[i]);
        average+=array[i];
    }
    
    average=average/kazu; //平均を計算する
    printf("average = %d\n",average); //平均を表示する
    
    for(int i=0;i<kazu;i++)
    {
        if(average<array[i]) //データが平均を超えていたら番号と数値を表示
        {
            printf("No.%d: %d\n",i,array[i]);
        }
    }
    return 0;
}
