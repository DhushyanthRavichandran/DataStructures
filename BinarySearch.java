import java.util.*;

class BinarySearch {
    int binarySearch(int arr[], int x) {
        int start = 0;
        int end = arr.length - 1;
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] == x) {
                return mid;
            }

            if (arr[mid] < x) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
    }
}

public class Main {
    public static void main(String[] args) {
        BinarySearch bs = new BinarySearch();
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the number of elements:");
        int n = scan.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter the elements:");
        for (int i = 0; i < n; i++) {
            arr[i] = scan.nextInt();
        }
        System.out.println("Enter the element to be searched:");
        int x = scan.nextInt();
        int index = bs.binarySearch(arr, x);
        System.out.println("Element found at index: " + index);
    }
}
