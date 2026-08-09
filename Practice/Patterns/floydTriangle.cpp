#include <iostream>
using namespace std;

int main()
{
    int n;
    int num = 1;
    cout << "Enter number: ";
    cin >> n;
    cout << "Floyd's triangle pattern for number " << n << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num++ << " ";
        }
        cout << endl;
    }
    return 0;
}