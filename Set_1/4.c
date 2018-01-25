#include<stdio.h>
void main(){
    char a;
    printf("Character: ");
    scanf("%s",&a);
    if(a>=65 && a<=90 || a>=97 && a<=122){
        printf("Character\n");
    }
    else{
        printf("Not a character\n");
    }
}
