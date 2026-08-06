#include <iostream>
#define PI 3.14
using namespace std;

int main()
{
    int radius;
    cout << "Enter radius: ";
    cin >> radius;
    float area = PI * radius * radius;
    cout << "The area of the circle is: " << area << endl;
    return 0;
}