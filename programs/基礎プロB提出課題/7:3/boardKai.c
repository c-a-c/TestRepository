/*****
      boardKai.c
      9x9のゲーム盤にランダムに20個のコマを配置し、
      縦か横に4つ並んでいるか判定する
*****/

#include <stdio.h>
#include <stdlib.h>  // rand関数を使うために必要
#include <time.h>  // time関数を使うために必要

int main() {
    int board[9][9] = {};  // 盤、0は駒無し、1は駒あり、初期状態はすべて0
    /*
	   配列に初期値を代入する際に{}の中に何も書かなければ
	   すべての要素に0を代入することができる
	*/

    int x, y;  // コマを配置する座標
    int koma;  // 配置するコマの個数を数えるカウンタ変数
    int i, j;  // カウンタ変数

    srand(time(NULL));  // 乱数を現在時刻で初期化する

    // 20個のコマをランダムな座標に配置する
    koma = 0;
    do {
        x = rand() % 9;  // xの値を0〜8の乱数値とする
        y = rand() % 9;  // yの値を0〜8の乱数値とする
        if (board[x][y] == 0) {  // (x,y)の位置にコマがなければ
            board[x][y] = 1;  // コマ有りにする
            koma++;  // 置いたコマの個数を1増やす
        }
    } while (koma < 20);  // 20個コマを置くまで繰り返す
    
    // 盤の表示 xとyが逆？
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");  // 1行分表示したら改行する
    }

    // 判定する
    //一つの列に４つの並びが複数、または５つ以上並んでも一つと判定されます。
    
    int bingo=0;
    //縦判定
     for(i=0;i<9;i++){
        for(j=0;j<6;j++){
            if(board[j][i]==1){
                if(board[j+1][i]==1){
                    if(board[j+2][i]==1){
                        if(board[j+3][i]==1){
                            bingo++;
                            break;
                            
                        }
                    }
                }
            }
        }
     }
     printf("%d\n",bingo);
     printf("==================\n");
    //横判定
    for(j=0;j<9;j++){
        for(i=0;i<6;i++){
            if(board[j][i]==1){
                if(board[j][i+1]==1){
                    if(board[j][i+2]==1){
                        if(board[j][i+3]==1){
                            bingo++;
                            break;
                        }
                    }
                }
            }
        }
    }
    
    //斜め判定
    //左上から右下
    int k=0;
    i=j=0;
    for(int l=0;l<6;l++){
        j=k=l;
        i=0;
        for(;k<6;k++){
            if(board[i][j]==1){
                if(board[i+1][j+1]==1){
                    if(board[i+2][j+2]==1){
                        if(board[i+3][j+3]==1){
                            bingo++;
                            break;
                        }
                    }
                }
            }
            i++;
            j++;
        }
        
    }
    
    for(int l=1;l<6;l++){
        i=k=l;
        j=0;
        for(;k<6;k++){
            if(board[i][j]==1){
                if(board[i+1][j+1]==1){
                    if(board[i+2][j+2]==1){
                        if(board[i+3][j+3]==1){
                            bingo++;
                            break;
                        }
                    }
                }
            }
            i++;
            j++;
        }
    }
    
    //右上から左下
    k=8;
    i=j=8;
    for(int l=8;l>2;l--){
        j=k=l;
        i=0;
        for(;k>2;k--){
            if(board[i][j]==1){
                if(board[i+1][j-1]==1){
                    if(board[i+2][j-2]==1){
                        if(board[i+3][j-3]==1){
                            bingo++;
                            break;
                        }
                    }
                }
            }
            i++;
            j--;
        }
        
    }
    
    for(int l=1;l<6;l++){
        i=k=l;
        j=8;
        for(;k<6;k++){
            if(board[i][j]==1){
                if(board[i+1][j-1]==1){
                    if(board[i+2][j-2]==1){
                        if(board[i+3][j-3]==1){
                            bingo++;
                            break;
                        }
                    }
                }
            }
            i++;
            j--;
        }
    }
    //判定ここまで

    if(bingo==0) printf("NO BINGO\n");
    else printf("%dLINE BINGO!\n",bingo);
    return 0;
}
