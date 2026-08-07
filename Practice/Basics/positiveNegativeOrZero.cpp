#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    if (n > 0)
    {
        cout << "Number is positive." << endl;
    }
    else if (n < 0)
    {
        cout << "Number is negative." << endl;
    }
    else
    {
        cout << "Number is equal to zero." << endl;
    }
    return 0;
}