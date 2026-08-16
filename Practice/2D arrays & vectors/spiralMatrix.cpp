#include <iostream>
#include <vector>
using namespace std;

void printSpiralMatrix(vector<vector<int>> &matrix)
{
    int n, m;
    n = matrix.size();
    m = matrix[0].size();

    int startingRow = 0, startingColumn = 0;
    int endingRow = n - 1, endingColumn = m - 1;
    cout << "Spiral design: ";
    while (startingRow <= endingRow && startingColumn <= endingColumn)
    {
        // top
        for (int j = startingColumn; j <= endingColumn; j++)
        {
            cout << matrix[startingRow][j] << " ";
        }

        // right
        for (int i = startingRow + 1; i <= endingRow; i++)
        {
            cout << matrix[i][endingColumn] << " ";
        }

        // bottom
        for (int j = endingColumn - 1; j >= startingColumn; j--)
        {
            if (startingRow == endingRow)
            {
                break;
            }
            cout << matrix[endingRow][j] << " ";
        }

        // left
        for (int i = endingRow - 1; i >= startingRow + 1; i--)
        {
            if (startingColumn == endingColumn)
            {
                break;
            }
            cout << matrix[i][startingColumn] << " ";
        }

        // update values
        startingRow++, startingColumn++, endingRow--, endingColumn--;
    }
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
    printSpiralMatrix(matrix);
    return 0;
}