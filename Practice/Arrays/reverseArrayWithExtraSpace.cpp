#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    int copyArr[n];

    for (int i = 0; i < n; i++)
    {
        copyArr[i] = arr[n - i - 1];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = copyArr[i];
    }
}

void printArr(int arr[], int n)
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
    if (n != 0)
    {
        int arr[n];
        cout << "Enter elements of the array: ";

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        reverseArray(arr, n);

        cout << "Array after reversing the elements: ";
        printArr(arr, n);
    }
    return 0;
}