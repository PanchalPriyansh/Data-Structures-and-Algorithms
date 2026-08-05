#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "First " << n << " natural numbers: ";
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}