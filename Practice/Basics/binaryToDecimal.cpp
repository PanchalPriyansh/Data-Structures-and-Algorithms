#include <iostream>
using namespace std;

int main()
{
    int n, num;
    cout << "Enter number (In binary format): ";
    cin >> n;
    num = n;
    int pow = 1;
    int decimal = 0;
    while (num > 0)
    {
        int lastGigit = num % 10;
        decimal += lastGigit * pow;
        num /= 10;
        pow *= 2;
    }
    cout << "Decimal conversion of binary number " << n << " is: " << decimal << endl;
    return 0;
}