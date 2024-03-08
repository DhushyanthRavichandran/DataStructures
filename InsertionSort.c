
#include <stdio.h>



void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertionSort(int arr[],int n){
    int i ,j,key;
    for(i=1;i<n;i++){
        key =arr[i];
        j=i-1;
        while(j>=0 && key < arr[j]){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
        
    }
}



void printArray(int arr[], int size){
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
}


int main(){
    int arr[] = {1, 2, 4, 6, 3, 5, 0, 9, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
