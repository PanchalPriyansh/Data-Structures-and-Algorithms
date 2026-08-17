#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> &vec, int target)
{
    int start = 0, end = vec.size() - 1;
    vector<int> result;
    while (start < end)
    {
        int currSum = vec[start] + vec[end];
        if (currSum == target)
        {
            result.push_back(vec[start]);
            result.push_back(vec[end]);
            return result;
        }
        else if (currSum > target)
        {
            end--;
        }
        else
        {
            start++;
        }
    }
    return result;
}

int main()
{
    int n;
    cout << "Enter number of elements in the vector: ";
    cin >> n;

    vector<int> vec(n);
    cout << "Enter elements of the vector: ";
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    vector<int> result = pairSum(vec, target);
    if (result.size() == 0)
    {
        cout << "No pair found with sum " << target << "." << endl;
    }
    else
    {
        cout << "Pair found: (" << result[0] << ", " << result[1] << ") = " << target << endl;
    }
    return 0;
}