import java.util.*;
import java.util.Scanner;

/**
 * Program to solve the "Two Sum" problem.
 *
 * Given an array of integers nums and an integer target,
 * find the indices of the two numbers that add up to the target.
 *
 * Example:
 * Input: nums = [2, 7, 11, 15], target = 9
 * Output: [0, 1] // nums[0] + nums[1] = 2 + 7 = 9
 *
 * Author: Veeru Yadav
 * GitHub: https://github.com/VeeruYadav45
 */

public class TwoSum {

    public static int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> map = new HashMap<>(); // value -> index

        for (int i = 0; i < nums.length; i++) {
            map.put(nums[i], i); // store latest index
        }

        for (int j = 0; j < nums.length; j++) {
            int complement = target - nums[j];
            if (map.containsKey(complement) && map.get(complement) != j) {
                return new int[] { j, map.get(complement) };
            }
        }

        return new int[] {}; // no pair found
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number of elements: ");
        int n = sc.nextInt();

        int[] nums = new int[n];
        System.out.print("Enter the array elements: ");
        for (int i = 0; i < n; i++)
            nums[i] = sc.nextInt();

        System.out.print("Enter the target sum: ");
        int target = sc.nextInt();

        int[] result = twoSum(nums, target);

        if (result.length == 2) {
            System.out.println("Indices of the elements that add up to " + target + " are: "
                    + result[0] + " and " + result[1]);
            System.out.println("Elements are: " + nums[result[0]] + " + " + nums[result[1]] + " = " + target);
        } else {
            System.out.println("No two elements add up to " + target + ".");
        }
    }
}
