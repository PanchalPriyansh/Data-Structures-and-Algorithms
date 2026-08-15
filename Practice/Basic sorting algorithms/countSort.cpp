#include <iostream>
#include <climits>
using namespace std;

void countSortAscending(int arr[], int n)
{
    int frequency[100] = {0};
    int minVal = INT_MAX, maxVal = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        maxVal = max(arr[i], maxVal);
        minVal = min(arr[i], minVal);
    }

    for (int i = 0; i < n; i++)
    {
        frequency[arr[i]]++;
    }

    for (int i = minVal, j = 0; i <= maxVal; i++)
    {
        while (frequency[i] > 0)
        {
            arr[j++] = i;
            frequency[i]--;
        }
    }
}

void countSortDescending(int arr[], int n)
{
    int frequency[100] = {0};
    int minVal = INT_MAX, maxVal = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        maxVal = max(arr[i], maxVal);
        minVal = min(arr[i], minVal);
    }

    for (int i = 0; i < n; i++)
    {
        frequency[arr[i]]++;
    }

    for (int i = maxVal, j = 0; i >= minVal; i--)
    {
        while (frequency[i] > 0)
        {
            arr[j++] = i;
            frequency[i]--;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
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

    int choice;
    cout << "1. Ascending sort\n2. Descending sort\nChoose any one from above: ";
    cin >> choice;
    int result;

    if (choice == 1)
    {
        countSortAscending(arr, n);
        cout << "Array after sorting: ";
        printArray(arr, n);
    }
    else if (choice == 2)
    {
        countSortDescending(arr, n);
        cout << "Array after sorting: ";
        printArray(arr, n);
    }
    else
    {
        cout << "Invalid choice.";
    }
    return 0;
}