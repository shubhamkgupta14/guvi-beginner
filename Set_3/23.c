#include<stdio.h>
void main(){
    long int arr[100000],n, min, i;
    printf("n: "); 
    scanf("%ld",&n);
    printf("Array: ");
    for(i=0;i<n;i++){
        scanf("%ld",&arr[i]);
    }
    min = arr[0];
    for(i=1;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("%ld",min);
}
