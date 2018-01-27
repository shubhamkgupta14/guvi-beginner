#include<stdio.h>
void main(){
    long int arr[100000],n, max, i;
    printf("n: "); 
    scanf("%ld",&n);
    printf("Array: ");
    for(i=0;i<n;i++){
        scanf("%ld",&arr[i]);
    }
    max = arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("%ld",max);
}
