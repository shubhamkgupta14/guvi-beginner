#include<stdio.h>
void main(){
    int arr[1000], i, m=0, n;
    printf("n: ");
    scanf("%d",&n);
    printf("Array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        m = m + arr[i];
    }
    printf("%d",m/n);
}
