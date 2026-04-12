##include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(vector<int>& prices) {

    if (prices.size() == 0) return 0;   // ? important fix

    int maxProfit = 0;
    int bestBuy = prices[0];

    for (int i = 1; i < prices.size(); i++) {

        maxProfit = max(maxProfit, prices[i] - bestBuy);

        bestBuy = min(bestBuy, prices[i]);
    }

    return maxProfit;
}

int main() {
    vector<int> prices;
    int n, price;

    cout << "Enter number of days: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input";
        return 0;
    }

    cout << "Enter prices: ";
    for (int i = 0; i < n; i++) {
        cin >> price;
        prices.push_back(price);
    }

    cout << "Maximum Profit = " << maxProfit(prices);

    return 0;
}
