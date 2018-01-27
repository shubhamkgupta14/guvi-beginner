#include<stdio.h>
void main(){
    int a,n,d;
    int sum=0;
    printf("N, A, D: ");
    scanf("%d%d%d",&n,&a,&d);
    sum = (n/2.0)*(2*a+(n-1)*d);
    printf("%d",sum);
}
