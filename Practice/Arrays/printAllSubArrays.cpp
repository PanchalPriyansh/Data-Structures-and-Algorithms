#include <iostream>
using namespace std;

void printSubArrays(int arr[], int n)
{
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            cout << "(";
            for (int i = start; i <= end; i++)
            {
                cout << arr[i];
                if (i != end)
                {
                    cout << ",";
                }
            }
            cout << ") ";
        }
        cout << endl;
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

    printSubArrays(arr, n);
    return 0;
}