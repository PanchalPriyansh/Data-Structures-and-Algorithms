#include <iostream>
#include <cstring>
using namespace std;

void toUpper(char word[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z')
        {
            word[i] = word[i] - 'a' + 'A';
        }
    }
}

int main()
{
    char word[100];
    cout << "Enter word: ";
    cin >> word;
    toUpper(word, strlen(word));
    cout << "Uppercase: " << word;
    return 0;
}