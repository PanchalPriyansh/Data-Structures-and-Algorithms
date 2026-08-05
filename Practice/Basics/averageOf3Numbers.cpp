#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;

    float average = (a + b + c) / 3;
    cout << "Average: " << average << endl;
    return 0;
}