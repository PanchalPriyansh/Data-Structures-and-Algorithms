#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int profit(vector<int> prices)
{
    int n = prices.size();
    int bestBuy[n];

    bestBuy[0] = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        bestBuy[i] = min(bestBuy[i - 1], prices[i - 1]);
    }

    int maxProfit = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int currProfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit, currProfit);
    }

    if (maxProfit < 0)
    {
        return 0;
    }
    return maxProfit;
}

int main()
{
    int n;
    cout << "Enter number of days: ";
    cin >> n;

    vector<int> prices(n);
    cout << "Enter price of stocks for all days: ";
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }

    int result = profit(prices);
    cout << "Max profit: " << result;
}