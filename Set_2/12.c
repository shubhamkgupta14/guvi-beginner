#include<stdio.h>
void main(){
    int num, r, temp, sum =0;
    printf("num: ");
    scanf("%d",&num);
    temp = num;
    while(num>0){
        r = num % 10;
        num = num / 10;
        sum = sum * 10 + r;
    }
    if(sum == temp){
        printf("yes");
    }
    else{
        printf("no");
    }
}
