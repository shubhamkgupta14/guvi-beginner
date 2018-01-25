#include<stdio.h>
void main(){
    int arr[50], sum=0, n, k, i;
    printf("n: ");
    scanf("%d",&n);
    printf("k: ");
    scanf("%d",&k);
    printf("Enter array: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<k;i++){
        sum = sum + arr[i];
    }
    printf("%d\n",sum);
}
