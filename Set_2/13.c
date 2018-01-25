#include<stdio.h>
void main(){
    int num,i,c=0;
    printf("num: ");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++){
        if(num%i == 0){
            c++;
        }
    }
    if(c>0){
        printf("no");
    }
    else{
        printf("yes");
    }
    
}
