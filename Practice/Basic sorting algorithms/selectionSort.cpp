#include <iostream>
using namespace std;

void selectionSortAscending(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

void selectionSortDescending(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
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
        selectionSortAscending(arr, n);
        cout << "Array after sorting: ";
        printArray(arr, n);
    }
    else if (choice == 2)
    {
        selectionSortDescending(arr, n);
        cout << "Array after sorting: ";
        printArray(arr, n);
    }
    else
    {
        cout << "Invalid choice.";
    }
    return 0;
}