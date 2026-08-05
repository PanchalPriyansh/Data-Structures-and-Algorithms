#include <iostream>
using namespace std;

int main()
{
    for (int i = 10; i <= 50; i++)
    {
        if (i % 3 == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}