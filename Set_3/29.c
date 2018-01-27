#include<stdio.h>
int main(){
    int tm, hr=0;
    printf("Time in min: ");
    scanf("%d",&tm);    
    if(tm>=60){
        hr = tm/60;
        tm = tm%60;
    }
    printf("%d %d",hr,tm);    
    return 0;
}
