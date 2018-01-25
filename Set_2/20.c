#include<stdio.h>
void main(){
    int num, i, m;
    printf("num: ");
    scanf("%d",&num);
    for(i=1;i<=5;i++){
        m = num * i;
        printf("%d ",m);
    }
}
