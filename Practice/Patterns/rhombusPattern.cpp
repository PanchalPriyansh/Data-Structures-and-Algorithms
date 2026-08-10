#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    int base;
    cout << "Enter base of rhombus: ";
    cin >> base;
    cout << "Rhombus pattern for number " << n << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= base; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}