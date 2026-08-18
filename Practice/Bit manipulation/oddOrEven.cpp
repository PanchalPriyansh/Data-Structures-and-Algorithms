#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    if (!(n & 1))
    {
        cout << n << " is even.";
    }
    else
    {
        cout << n << " is odd.";
    }
    return 0;
}