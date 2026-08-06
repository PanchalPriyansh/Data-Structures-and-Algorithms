#include <iostream>
using namespace std;

int main()
{
    float item1, item2, item3;
    cout << "Enter cost of item 1 (in Rs.): ";
    cin >> item1;
    cout << "Enter cost of item 2 (in Rs.): ";
    cin >> item2;
    cout << "Enter cost of item 3 (in Rs.): ";
    cin >> item3;

    float totalCost = item1 + item2 + item3;
    float totalCostWithGST = totalCost + totalCost * 0.18;

    cout << "Total cost (Without GST): " << totalCost << endl;
    cout << "Total cost (GST included): " << totalCostWithGST << endl;
    return 0;
}