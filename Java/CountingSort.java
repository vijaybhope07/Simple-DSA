

public class CountingSort {

    // Counting Sort function
    public static void countingSort(int[] arr) {
        int n = arr.length;

        // Find the maximum element
        int max = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }

        // Initialize count array
        int[] count = new int[max + 1];

        // Store the count of each element
        for (int i = 0; i < n; i++) {
            count[arr[i]]++;
        }

        // Modify count array to store positions
        for (int i = 1; i <= max; i++) {
            count[i] += count[i - 1];
        }

        // Output array
        int[] output = new int[n];

        // Build the output array
        for (int i = n - 1; i >= 0; i--) {
            output[count[arr[i]] - 1] = arr[i];
            count[arr[i]]--;
        }

        // Copy the sorted elements back to original array
        for (int i = 0; i < n; i++) {
            arr[i] = output[i];
        }
    }

    // Utility function to print array
    public static void printArray(int[] arr) {
        for (int num : arr) {
            System.out.print(num + " ");
        }
        System.out.println();
    }

    // Test Counting Sort
    public static void main(String[] args) {
        int[] arr = {4, 2, 2, 8, 3, 3, 1};
        System.out.println("Given Array:");
        printArray(arr);

        countingSort(arr);

        System.out.println("Sorted Array:");
        printArray(arr);
    }
}

