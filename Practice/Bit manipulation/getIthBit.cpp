#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout << "Enter number: ";
    cin >> n;

    cout << "Give index of Ith bit from right most side: ";
    cin >> i;

    if((n & (1 << i))){
        cout << "Entered Ith bit is 1.";
    }else{
        cout << "Entered Ith bit is 0.";
    }
    return 0;
}