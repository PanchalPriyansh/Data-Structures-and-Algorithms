#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter year: ";
    cin >> n;
    if (n % 400 == 0)
    {
        cout << n << " is a Leap Year." << endl;
    }
    else if (n % 100 == 0)
    {
        cout << n << " is not a Leap Year." << endl;
    }
    else if (n % 4 == 0)
    {
        cout << n << " is a Leap Year." << endl;
    }
    else
    {
        cout << n << " is not a Leap Year." << endl;
    }
    return 0;
}