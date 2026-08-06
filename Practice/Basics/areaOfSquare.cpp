#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter side of a square: ";
    cin >> n;
    int area = n * n;
    cout << "Area of square with side " << n << " is : " << area << endl;
    return 0;
}