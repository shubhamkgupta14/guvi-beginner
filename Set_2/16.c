#include<stdio.h>
void main(){
    int f,l,i,j,c=0;
    printf("f,l: ");
    scanf("%d%d",&f,&l);
    for(i=f;i<=l;i++){
        c=0;
        for(j=1;j<=i/2;j++){
            if(i%j==0){
                c++;
            }
        }
        if(c==1){
            printf("%d, ",i);
        }       
    }
    printf("\b\b  \n");       
}
