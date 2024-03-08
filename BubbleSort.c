#include<stdio.h>

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}


void bubbleSort(int arr[], int n){
    int i,j;
    int flag;
    for(i=0;i<n-1;i++){
        flag=1;
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                flag=0;
                swap(&arr[j],&arr[j+1]);
            }
        }
        if(flag==1) return;
        
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    printf("%d ", arr[i]);
}
int main(){
        int  arr[]={1,2,4,6,3,5,0,9,7};
        int n = sizeof(arr) / sizeof(arr[0]);
        bubbleSort(arr,n);
        printf("Sorted array: \n");
        printArray(arr, n);

}