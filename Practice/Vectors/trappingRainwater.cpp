#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int trappedRainwater(vector<int> heights)
{
    int n = heights.size();
    if (n <= 2)
    {
        return 0;
    }

    int leftMax[n];
    int rightMax[n];

    leftMax[0] = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        leftMax[i] = max(leftMax[i - 1], heights[i - 1]);
    }

    rightMax[n - 1] = INT_MIN;
    for (int i = n - 2; i >= 0; i--)
    {
        rightMax[i] = max(rightMax[i + 1], heights[i + 1]);
    }

    int trappedWater = 0;
    for (int i = 1; i <= n - 2; i++)
    {
        int currWater = min(leftMax[i], rightMax[i]) - heights[i];
        if (currWater > 0)
        {
            trappedWater += currWater;
        }
    }
    return trappedWater;
}

int main()
{
    int n;
    cout << "Enter length of vector: ";
    cin >> n;

    vector<int> heights(n);
    cout << "Enter heights: ";
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }

    int result = trappedRainwater(heights);
    cout << "Trapped rainwater: " << result;
}