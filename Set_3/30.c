#include<stdio.h>
#include<stdlib.h>

void main(){
    int hr1=0,mn1=0,hr2=0,mn2=0,hr,mn;
    printf("Time1:(hr,min) ");
    scanf("%d%d",&hr1,&mn1);
    printf("Time2:(hr,min) ");
    scanf("%d%d",&hr2,&mn2);
    if(mn1>=mn2 && hr1>=hr2){
        hr = hr1 - hr2;
        mn = mn1 - mn2;
        printf("%d : %d",hr,mn);
        exit(1);
    }
    else if(hr1>hr2){
        hr1--;
        mn1+=60;
        hr=hr1-hr2;
        mn=mn1-mn2;
        printf("%d : %d",hr,mn);
    }    
}
