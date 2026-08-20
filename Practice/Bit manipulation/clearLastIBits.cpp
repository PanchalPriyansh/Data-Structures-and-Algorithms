#include <iostream>
using namespace std;
int clearLastIBits(int number, int index)
{
    int bitMask = ~0 << index;
    number = number & bitMask;
    return number;
}

int main()
{
    int n, i;
    cout << "Enter number: ";
    cin >> n;

    cout << "How many bits you want to clear?: ";
    cin >> i;

    cout << "Number after clearing last " << i << " bits : " << clearLastIBits(n, i);
    return 0;
}