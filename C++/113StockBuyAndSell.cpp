#include <iostream>
#include <vector>
#include <climits>
using namespace std;

/**
 * Program to find the Maximum Profit from Stock Buy and Sell.
 *
 * Given an array where each element represents the price of a stock on that day,
 * the goal is to find the maximum profit by choosing a single day to buy
 * and a different day in the future to sell.
 *
 * Example:
 * Input: [7, 1, 5, 3, 6, 4]
 * Output: 5
 * Explanation: Buy at price 1 and sell at price 6 → profit = 5
 *
 * Author:Veeru Yadav
 * GitHub: https://github.com/VeeruYadav45
 */

class Solution
{
public:
    /**
     * Finds the maximum profit achievable from a single buy-sell transaction.
     *
     * @param prices A vector of stock prices.
     * @return The maximum possible profit.
     */
    int maxProfit(vector<int> &prices)
    {
        int minPrice = INT_MAX; // To track the lowest price so far
        int maxProfit = 0;      // To track the maximum profit found

        for (int price : prices)
        {
            // Update the minimum price seen so far
            minPrice = min(minPrice, price);

            // Calculate potential profit and update if it's greater than the current max
            maxProfit = max(maxProfit, price - minPrice);
        }

        return maxProfit;
    }
};

int main()
{
    Solution sol;
    int n;

    cout << "Enter the number of days: ";
    cin >> n;

    vector<int> prices(n);
    cout << "Enter the stock prices for each day: ";
    for (int i = 0; i < n; i++)
        cin >> prices[i];

    int profit = sol.maxProfit(prices);

    cout << "The maximum profit that can be achieved is: " << profit << endl;

    return 0;
}
