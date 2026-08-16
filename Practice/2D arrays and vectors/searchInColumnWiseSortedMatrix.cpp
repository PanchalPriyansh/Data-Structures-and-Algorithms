#include <iostream>
#include <vector>
using namespace std;

bool columnWiseBinarySearch(vector<vector<int>> &matrix, int target)
{
    int n, m;
    n = matrix.size();
    m = matrix[0].size();

    for (int j = 0; j < m; j++)
    {
        int start = 0, end = n - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            int cellValue = matrix[mid][j];
            if (cellValue == target)
            {
                cout << "Target found at cell (" << mid << "," << j << ")";
                return true;
            }
            else if (cellValue < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return false;
}

int main()
{
    int n, m;
    cout << "Enter number of rows in the matrix: ";
    cin >> n;
    cout << "Enter number of columns in the matrix: ";
    cin >> m;

    vector<vector<int>> matrix(n, vector<int>(m));
    cout << "Enter values of the matrix: ";
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cin >> matrix[i][j];
        }
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    int result = columnWiseBinarySearch(matrix, target);
    if (!result)
    {
        cout << "Target not found.";
    }

    return 0;
}