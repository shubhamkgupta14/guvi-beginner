#include<stdio.h>
void main(){
    int yr;
    printf("Enter an year: ");
    scanf("%d",&yr);
    if(yr%4==0 && yr%100!=0 || yr%400==0){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
}
