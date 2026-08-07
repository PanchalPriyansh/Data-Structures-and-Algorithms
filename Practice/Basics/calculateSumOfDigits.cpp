#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    int temp= n;
    int sum = 0;
    while (temp != 0)
    {
        int lastGigit = temp % 10;
        sum += lastGigit;
        temp /= 10;
    }
    cout << "Sum of digits of number " << n << " is: " << sum << endl;
    return 0;
}