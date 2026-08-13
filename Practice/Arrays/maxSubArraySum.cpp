#include <iostream>
#include <climits>
using namespace std;

int maxSubArraySum(int arr[], int n)
{
    int maxSum = INT_MIN;
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int currSum = 0;
            for (int i = start; i <= end; i++)
            {
                currSum += arr[i];
            }
            maxSum = max(currSum, maxSum);
        }
    }
    return maxSum;
}

int main()
{
    int n;
    cout << "Enter number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of the array: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = maxSubArraySum(arr, n);
    cout << "Maximum subarray sum: " << result << endl;
    return 0;
}