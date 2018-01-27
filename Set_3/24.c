// Bubble sort

#include<stdio.h>
#include<malloc.h>
void main(){
    int i,n,j, temp;
    printf("N: ");
    scanf("%d",&n);
    int *ar = malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(ar[j]>ar[j+1]){
                temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp; 
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d",ar[i]);
    }
}
