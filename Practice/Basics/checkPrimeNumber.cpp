#include <iostream>
using namespace std;

int main()
{
    int n;
    bool isPrime = true;
    cout << "Enter number: ";
    cin >> n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
    {
        cout << "Number " << n << " is prime." << endl;
    }
    else
    {
        cout << "Number " << n << " is not prime." << endl;
    }

    return 0;
}