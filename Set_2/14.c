#include<stdio.h>
void main(){
    int f,l,i;
    printf("f,l: ");
    scanf("%d%d",&f,&l);
    for(i=f+1;i<=l;i++){
        if(i%2!=0){
            printf("%d  ",i);
        }
    }
}
