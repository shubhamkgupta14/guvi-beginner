#include<stdio.h>
void main(){
    long int a;
    printf("a: ");
    scanf("%ld",&a);
    if(a%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}
