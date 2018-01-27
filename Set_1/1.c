#include<stdio.h>
void main(){
    long int a;
    printf("a: ");
    scanf("%ld",&a);
    if(a>0){
        printf("Positive");
    }
    else if(a<0){
        printf("Negative");
    }
    else{
        printf("zero");
    }
}
