#include <iostream>
using namespace std;

int main()
{
    int length, width;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;

    int area = length * width;
    cout << "The area of the rectangle is: " << area << endl;
    return 0;
}