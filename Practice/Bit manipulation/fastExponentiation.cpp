#include <iostream>
using namespace std;

int fastExponentiation(int number, int power)
{
    int result = 1;
    while (power > 0)
    {
        int lastBit = power & 1;
        if (lastBit)
        {
            result = result * number;
        }
        number *= number;
        power = power >> 1;
    }
    return result;
}

int main()
{
    int n, power;
    cout << "Enter number: ";
    cin >> n;
    cout << "Enter power: ";
    cin >> power;

    cout << "Calculating " << n << " raised to " << power << " using fast exponentiation method: " << fastExponentiation(n, power) << endl;
    return 0;
}