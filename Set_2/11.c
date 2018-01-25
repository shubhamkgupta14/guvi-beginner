#include<stdio.h>
#include<math.h>
void main(){
    int a,b;
    printf("num , power: ");
    scanf("%d%d",&a,&b);
    a = pow(a,b);
    printf("%d",a);
}
