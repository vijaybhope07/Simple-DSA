"""
Program to find the Maximum Profit from Stock Buy and Sell.

Given a list where each element represents the stock price on that day,
find the maximum profit you can achieve from a single buy and sell.

Example:
Input: [7, 1, 5, 3, 6, 4]
Output: 5
Explanation: Buy at 1, sell at 6 → profit = 5

Author: Veeru Yadav
GitHub: https://github.com/VeeruYadav45
"""

def max_profit(prices):
    min_price = float('inf')  # Initialize with a very large value
    max_profit = 0

    for price in prices:
        min_price = min(min_price, price)  # Update the minimum price so far
        max_profit = max(max_profit, price - min_price)  # Update max profit

    return max_profit


# ---------- Main Program ----------
if __name__ == "__main__":
    n = int(input("Enter the number of days: "))
    prices = list(map(int, input("Enter the stock prices for each day: ").split()))

    profit = max_profit(prices)
    print(f"The maximum profit that can be achieved is: {profit}")
