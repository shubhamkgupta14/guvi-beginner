// Quick sort

#include<stdio.h>
void quick(long int arr[], long int low, long int high);
int partition(long int arr[], long int low, long int high);

void main(){
    long int arr[100000], n, i, j;
    printf("n: ");
    scanf("%ld",&n);
    printf("Array: ");
    for(i=0;i<n;i++){
        scanf("%ld",&arr[i]);
    }
    quick(arr, 0, n-1);
    printf("Sorted array: ");
    for(i=0;i<n;i++){
        printf("%ld\t",arr[i]);
    }
}

void quick(long int arr[], long int low, long int high){
    long int p;
    if(low < high){
        p = partition(arr, low, high);
        quick(arr,low,p-1);
        quick(arr,p+1,high);    
    }
}

int partition(long int arr[], long int low, long int high){
    long int p, i, j, temp;
    p = arr[high];
    i = low - 1;
    for(j=low;j<=high-1;j++){
        if(arr[j] <= p){
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp;
    return (i+1);
}
