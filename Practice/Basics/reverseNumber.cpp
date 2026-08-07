#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    int temp = n;
    int reversedNumber = 0;
    while (temp != 0)
    {
        int lastGigit = temp % 10;
        reversedNumber = reversedNumber * 10 + lastGigit;
        temp /= 10;
    }
    cout << "Reverse of number " << n << " is: " << reversedNumber << endl;
    return 0;
}