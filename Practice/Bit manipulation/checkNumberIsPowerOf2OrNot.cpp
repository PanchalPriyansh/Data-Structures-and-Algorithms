#include <iostream>
using namespace std;
void checkPowerof2(int number)
{
    if (!(number & (number - 1)))
    {
        cout << "Given number is power of 2.";
    }
    else
    {
        cout << "Given number is not power of 2.";
    }
}

int main()
{
    int n, i;
    cout << "Enter number: ";
    cin >> n;
    
    checkPowerof2(n);
    return 0;
}