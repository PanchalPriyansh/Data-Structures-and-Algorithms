#include <iostream>
using namespace std;

int main()
{
    int n;
    bool value = true;
    cout << "Enter number: ";
    cin >> n;
    cout << "0-1 triangle pattern for number " << n << endl;
    for (int i = 1; i <= n; i++)
    {
        bool value2 = value;
        for (int j = 1; j <= i; j++)
        {
            cout << value2;
            value2 = !value2;
        }
        value = !value;
        cout << endl;
    }
    return 0;
}