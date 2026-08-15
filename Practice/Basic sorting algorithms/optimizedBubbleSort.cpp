#include <iostream>
using namespace std;

void optimizedBubbleSortAscending(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool isSwapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwapped = true;
            }
        }
        if (!isSwapped)
        {
            return;
        }
    }
}

void optimizedBubbleSortDescending(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool isSwapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwapped = true;
            }
        }
        if (!isSwapped)
        {
            return;
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
        optimizedBubbleSortAscending(arr, n);
        cout << "Array after sorting: ";
        printArray(arr, n);
    }
    else if (choice == 2)
    {
        optimizedBubbleSortDescending(arr, n);
        cout << "Array after sorting: ";
        printArray(arr, n);
    }
    else
    {
        cout << "Invalid choice.";
    }
    return 0;
}