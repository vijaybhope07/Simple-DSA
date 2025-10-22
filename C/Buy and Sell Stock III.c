/*You are given an array prices where prices[i] is the price of a given stock on the ith day.

Find the maximum profit you can achieve. You may complete at most two transactions.

Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).*/
#include <stdio.h>
#include <limits.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int maxProfit(int* prices, int n) {
    int firstBuy = INT_MIN, firstSell = 0;
    int secondBuy = INT_MIN, secondSell = 0;

    for (int i = 0; i < n; i++) {
        int price = prices[i];
        firstBuy = max(firstBuy, -price);
        firstSell = max(firstSell, firstBuy + price);
        secondBuy = max(secondBuy, firstSell - price);
        secondSell = max(secondSell, secondBuy + price);
    }

    return secondSell;
}

int main() {
    int prices[] = {3,3,5,0,0,3,1,4};
    int n = sizeof(prices) / sizeof(prices[0]);
    printf("%d\n", maxProfit(prices, n));
    return 0;
}
