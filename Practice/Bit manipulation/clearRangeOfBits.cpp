#include <iostream>
using namespace std;

int clearRangeOfbits(int number, int i, int j)
{
    int bitMask1 = ~(~0 << i);
    int bitMask2 = ~0 << (j + 1);
    int finalBitMask = bitMask1 | bitMask2;
    return number & finalBitMask;
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    int i, j;
    cout << "Enter starting bit number of range: ";
    cin >> i;
    cout << "Enter ending bit number of range: ";
    cin >> j;
    
    cout << "Number after clearing bits: " << clearRangeOfbits(n, i, j) << endl;
    return 0;
}