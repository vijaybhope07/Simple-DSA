

public class ShellSort {

    // Function to perform Shell Sort
    public static void shellSort(int[] arr) {
        int n = arr.length;

        // Start with a big gap, then reduce the gap
        for (int gap = n / 2; gap > 0; gap /= 2) {
            // Do a gapped insertion sort for this gap size
            for (int i = gap; i < n; i++) {
                int temp = arr[i];
                int j = i;

                // Shift earlier gap-sorted elements up until the correct location is found
                while (j >= gap && arr[j - gap] > temp) {
                    arr[j] = arr[j - gap];
                    j -= gap;
                }

                // Put temp (the original arr[i]) in its correct location
                arr[j] = temp;
            }
        }
    }

    // Utility function to print array
    public static void printArray(int[] arr) {
        for (int num : arr)
            System.out.print(num + " ");
        System.out.println();
    }

    // Test Shell Sort
    public static void main(String[] args) {
        int[] arr = {12, 34, 54, 2, 3};
        System.out.println("Given Array:");
        printArray(arr);

        shellSort(arr);

        System.out.println("Sorted Array:");
        printArray(arr);
    }
}
