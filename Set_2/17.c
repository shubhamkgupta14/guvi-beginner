#include<stdio.h>
#include<math.h>
void main(){
    int num, r, temp, len , sum =0,c=0;
    printf("num: ");
    scanf("%d",&num);
    temp = num;
    len = num;
    while(len>0){
        len= len/10;
        c++;
    }
    while(num>0){
        r = num % 10;
        num = num / 10;
        sum = sum + pow(r,c);
    }
    if(sum == temp){
        printf("yes");
    }
    else{
        printf("no");
    }
}
