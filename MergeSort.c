#include <stdio.h>


void Merger(int arr[],int start,int mid,int end){
    int left_size=mid-start+1;
    int right_size=end-mid;
    int left_array[left_size],right_array[right_size],i,j;
    
    for(i=0;i<left_size;i++)
        left_array[i]=arr[i+start];
        
    for(j=0;j<right_size;j++)
        right_array[j]=arr[mid+1+j];
    i=j=0;
    int k=start;
    // Merge the elements from the left and right subarrays into the original array
    while(i<left_size && j<right_size)
    {
        if(left_array[i]<=right_array[j])
           arr[k++]=left_array[i];
        else
          arr[k++]=right_array[j++];
    }
    // Merge the remaining elements from the left subarray
    while(i<left_size)
        arr[k++]=left_array[i++];
    // Merge the remaining elements from the right subarray
    while(j<right_size)
        arr[k++]=right_array[j++];
    
    
}

void mergeSort(int arr[],int start,int end){
    if(start<end){
        int mid;
        mid=(start+end)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        Merger(arr,start,mid,end);
    }
}


void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); 
}

int main(){
    int arr[] = {1, 2, 4, 6, 3, 5, 0, 9, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr,0,n-1);
    printf("Sorted array: \n");
    printArray(arr, n);
}
