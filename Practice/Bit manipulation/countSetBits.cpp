#include <iostream>
using namespace std;
int countSetBits(int number)
{
    int count = 0;
    while (number > 0)
    {
        int lastBit = number & 1;
        count += lastBit;
        number = number >> 1;
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    cout << "Number of set bits in " << n << " is: " << countSetBits(n) << endl;
    return 0;
}