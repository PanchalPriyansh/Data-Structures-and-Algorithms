#include <iostream>
using namespace std;

void bubbleSortAscending(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void bubbleSortDescending(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
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
        bubbleSortAscending(arr, n);
        cout << "Array after sorting: ";
        printArray(arr, n);
    }
    else if (choice == 2)
    {
        bubbleSortDescending(arr, n);
        cout << "Array after sorting: ";
        printArray(arr, n);
    }
    else
    {
        cout << "Invalid choice.";
    }
    return 0;
}