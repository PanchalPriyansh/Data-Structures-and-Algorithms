#include <iostream>
using namespace std;

void insertionSortAscending(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > curr)
        {
            swap(arr[prev], arr[prev + 1]);
            prev--;
        }
        arr[prev + 1] = curr;
    }
}

void insertionSortDescending(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] < curr)
        {
            swap(arr[prev], arr[prev + 1]);
            prev--;
        }
        arr[prev + 1] = curr;
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
        insertionSortAscending(arr, n);
        cout << "Array after sorting: ";
        printArray(arr, n);
    }
    else if (choice == 2)
    {
        insertionSortDescending(arr, n);
        cout << "Array after sorting: ";
        printArray(arr, n);
    }
    else
    {
        cout << "Invalid choice.";
    }
    return 0;
}