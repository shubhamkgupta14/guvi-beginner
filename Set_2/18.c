#include<stdio.h>
#include<math.h>
void main(){
    int f,l,i,num, r, temp, len , sum ,c;
    printf("f,l: ");
    scanf("%d%d",&f,&l);
    for(i=f;i<=l;i++){
        temp = i;
        len = i;
        num = i;
        c=sum=0;
        while(len>0){
            len= len/10;
            c++;
        }
        while(num>0){
            r = num % 10;
            num = num / 10;
            sum = sum + pow(r,c);
        }
        if(sum == temp){
            printf("%d ",i);
        }
    }
}
