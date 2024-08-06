reverse an array

#include<stdio.h>

void swap(int arr[],int l,int r){
    int temp=0;
    temp=arr[l];
    arr[l]=arr[r];
    arr[r]=temp;
}

void revArray(int arr[],int l,int r){
    if(l>=r){
        return;
    }
    swap(arr,l,r);
    revArray(arr,l+1,r-1);
}

int main(){
    int arr[10];
    int n=5;
    printf("Enter your array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Reverse order:");
    revArray(arr,0,n-1);
    printf("Reverse order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
