#include<stdio.h>
void main(){
    int n, fac=1, i;
    printf("n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fac = fac * i;
    }
    printf("%d",fac);
}
