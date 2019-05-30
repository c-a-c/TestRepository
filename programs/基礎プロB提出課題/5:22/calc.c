
/*
calc.c
2019.5.22
953300 Kodai Okayama
 */

#include <stdio.h>


int main(void){
    int num1=0;
    int num2=0;
    printf("input 1st number: ");
    scanf("%d",&num1);
    printf("input 2nd number: ");
    scanf("%d",&num2);
    printf("%d + %d = %d\n",num1,num2,num1+num2);
    printf("%d - %d = %d\n",num1,num2,num1-num2);
    printf("%d * %d = %d\n",num1,num2,num1*num2);
    if(num2==0)  printf("error\n");
    else  printf("%d / %d = %d\n",num1,num2,num1/num2);
       
    return 0;
}
