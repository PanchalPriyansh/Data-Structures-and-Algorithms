#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number (n >=2): ";
    cin >> n;
    int first = 0;
    int second = 1;
    cout << first << " " << second << " ";
    for (int i = 2; i < n; i++)
    {
        int third = first + second;
        cout << third << " ";
        first = second;
        second = third;
    }
    return 0;
}