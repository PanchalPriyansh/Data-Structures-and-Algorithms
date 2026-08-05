#include <iostream>
using namespace std;

int main()
{
    int principalAmount, time;
    float interestRate;
    cout << "Enter principal amount (in Rs.): ";
    cin >> principalAmount;
    cout << "Enter interest rate percentage: ";
    cin >> interestRate;
    cout << "Enter time (in years): ";
    cin >> time;

    float simpleInterest = (principalAmount * interestRate * time) / 100;
    cout << "Simple interest: " << simpleInterest << " Rs." << endl;
    return 0;
}