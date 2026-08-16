#include <iostream>
#include <vector>
using namespace std;

int diagonalSum(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum += matrix[i][j];
            }
            else if (j == n - i - 1)
            {
                sum += matrix[i][j];
            }
        }
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter number of rows and columns for square matrix (n == m): ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    cout << "Enter values of the matrix: ";
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cin >> matrix[i][j];
        }
    }
    int result = diagonalSum(matrix);
    cout << "Diagnal sum: " << result << endl;
    return 0;
}