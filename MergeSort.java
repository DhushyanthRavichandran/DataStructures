import java.util.*;
class MergeSort{
    void sort(int[] arr,int l,int r){
        if(l<r){
        int m=l+(r-l)/2;
        sort(arr,l,m);
        sort(arr,m+1,r);
        
        merge(arr,l,m,r);
    }
    }
    
    void merge(int[] arr,int l,int m,int r){
        int n1=m-l+1;
        int n2=r-m;
        
        int[] first=new int[n1];
        int[] second =new int[n2];
        
        for(int i=0;i<n1;i++)   first[i]=arr[l+i];
        for(int j=0;j<n2;j++)   second[i]=arr[m+j+1];
        
        int i=0;
        int j=0;
        int k=l;
        while(i<n1 && j<n2){
            
            if(first[i]<=second[j])  
                arr[k++]=first[i++];
                
            else arr[k++]=second[j++];
        }
        
        while(i<n1) arr[k++]=first[i++];
        while(j<n2) arr[k++]=second[j++];
    }
    
}


class Main{
    public static void main(String[] args){
        Scanner scan=new Scanner(System.in);
        int n=scan.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=scan.nextInt();
        }
        MergeSort merger=new MergeSort();
        merger.sort(arr,0,n-1);
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
    }
}
