#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    int sum = 0;
    int temp = n;
    int length = 0;
    if (n == 0)
    {
        length = 1;
    }
    else
    {
        while (temp != 0)
        {
            temp /= 10;
            length++;
        }
        temp = n;
    }

    while (temp != 0)
    {
        int lastDigit = temp % 10;
        int multiplicationValue = 1;
        for (int i = 0; i < length; i++)
        {
            multiplicationValue *= lastDigit;
        }
        sum += multiplicationValue;
        temp /= 10;
    }
    if (n == sum)
    {
        cout << n << " is armstrong number.";
    }
    else
    {
        cout << n << " is not armstrong number.";
    }
    return 0;
}