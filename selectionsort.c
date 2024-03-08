#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[],int n){
  for(int i=0;i<n;i++){
      int min_index=i;
      for(int j=i+1;j<n;j++){
          if(arr[min_index]>arr[j]){
              min_index=j;
          }
      }
      swap(&arr[min_index],&arr[i]);
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
    selectionSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
