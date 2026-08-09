#include <iostream>
using namespace std;

int main()
{
    int width, length;
    cout << "Enter width of the rectangle: ";
    cin >> width;
    cout << "Enter length of the rectangle: ";
    cin >> length;
    cout << "Hollow rectangle pattern for width " << width << " and length " << length << endl;
    for (int i = 1; i <= width; i++)
    {
        cout << "*"; // First star
        for (int j = 2; j <= length - 1; j++)
        {
            if (i == 1 || i == width)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "*"; // Last star
        cout << endl;
    }
    return 0;
}