#include<stdio.h>
void main(){
    int arr[100],n,i;
    printf("n: "); 
    scanf("%d",&n);
    printf("Array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d\t%d\n",arr[i],i);
    }
}
