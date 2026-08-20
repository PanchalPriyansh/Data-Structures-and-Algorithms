#include <iostream>
using namespace std;
int setIthBit(int number, int index)
{
    int bitMask = 1 << index;
    return (number | bitMask);
}

int main()
{
    int n, i;
    cout << "Enter number: ";
    cin >> n;

    cout << "Give index of Ith bit from right most side: ";
    cin >> i;

    cout << "Number after setting Ith bit: " << setIthBit(n, i);
    return 0;
}