#include<stdio.h>
#include<string.h>
void main(){
    char str[50], i=0, flag=0;
    printf("String: ");
    gets(str);
    while(str[i]!='\0'){
        if(str[i]>=48 && str[i]<=57){
            flag=1;
        }    
        else{
            flag=0;
            break;
        }
        i++;
    }
    if(flag == 1){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
}
