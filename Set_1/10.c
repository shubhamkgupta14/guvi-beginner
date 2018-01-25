#include<stdio.h>
void main(){
    int n,i,c=0;
    printf("n: ");
    scanf("%d",&n);
    while(n>0){
        n = n / 10;
        c++;
    }
    printf("%d",c);
}
