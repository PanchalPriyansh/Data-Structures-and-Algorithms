#include <iostream>
#include <cstring>
using namespace std;

bool checkValidPalindrome(char word[], int n)
{
    int start = 0, end = n - 1;
    while (start < end)
    {
        if (word[start] != word[end])
        {
            return false;
        }
        start++, end--;
    }
    return true;
}

int main()
{
    char word[100];
    cout << "Enter word: ";
    cin >> word;

    bool result = checkValidPalindrome(word, strlen(word));
    if (result)
    {
        cout << word << " is a valid palindrome." << endl;
    }
    else
    {
        cout << word << " is not a valid palindrome" << endl;
    }
    return 0;
}