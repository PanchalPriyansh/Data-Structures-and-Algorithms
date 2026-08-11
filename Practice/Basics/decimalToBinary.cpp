#include <iostream>
using namespace std;

int main()
{
    int n, num; // 790
    cout << "Enter number (In decimal format): ";
    cin >> n;
    num = n;
    int pow = 1;
    int binary = 0;
    while (num > 0)
    {
        int lastGigit = num % 2;
        binary += lastGigit * pow;
        num /= 2;
        pow *= 10;
    }
    cout << "Binary conversion of decimal number " << n << " is: " << binary << endl;
    return 0;
}