//Calculating Maximimum Profit
#include <iostream>
#include <vector>
#include <climits> // For INT_MAX
using namespace std;

int maxProfit(vector<int>& prices) {
    if (prices.empty()) return 0; // Handle edge case

    int maxProfit = 0;
    int bestBuy = prices[0];

    for (int i = 1; i < prices.size(); i++) {
        maxProfit = max(maxProfit, prices[i] - bestBuy); // Compute profit
        bestBuy = min(bestBuy, prices[i]); // Update minimum buy price
    }

    return maxProfit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Maximum Profit: " << maxProfit(prices) << endl; // Output: 5

    vector<int> prices2 = {7, 6, 4, 3, 1}; // No profit scenario
    cout << "Maximum Profit: " << maxProfit(prices2) << endl; // Output: 0

    return 0;
}
