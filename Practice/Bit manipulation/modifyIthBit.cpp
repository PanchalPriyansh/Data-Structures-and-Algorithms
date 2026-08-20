#include <iostream>
using namespace std;
void updateIthBit(int number, int index, int value)
{
    number = ((number & ~(number << index)) | (value << index));
    cout << "Number after updating ith bit: " << number << endl;
}

int main()
{
    int n, i, value;
    cout << "Enter number: ";
    cin >> n;

    cout << "Give index of Ith bit from right most side: ";
    cin >> i;

    cout << "Update Ith bit with what? (1/0): ";
    cin >> value;

    updateIthBit(n, i, value);
    return 0;
}