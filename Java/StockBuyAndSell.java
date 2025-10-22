import java.util.*;
import java.util.Scanner;

/**
 * Program to find the Maximum Profit from Stock Buy and Sell.
 *
 * Given an array of stock prices for each day, find the maximum profit
 * that can be made by buying and selling once.
 *
 * Example:
 * Input: [7, 1, 5, 3, 6, 4]
 * Output: 5
 * Explanation: Buy at 1, sell at 6 → profit = 5
 *
 * Author: Veeru Yadav
 * GitHub: https://github.com/VeeruYadav45
 */

public class StockBuyAndSell {

    public static int maxProfit(int[] prices) {
        int minPrice = Integer.MAX_VALUE; // lowest price so far
        int maxProfit = 0; // maximum profit found

        for (int price : prices) {
            minPrice = Math.min(minPrice, price);
            maxProfit = Math.max(maxProfit, price - minPrice);
        }

        return maxProfit;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number of days: ");
        int n = sc.nextInt();

        int[] prices = new int[n];
        System.out.print("Enter the stock prices for each day: ");
        for (int i = 0; i < n; i++)
            prices[i] = sc.nextInt();

        int profit = maxProfit(prices);
        System.out.println("The maximum profit that can be achieved is: " + profit);
    }
}
