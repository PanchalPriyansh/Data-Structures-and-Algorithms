#include <iostream>
#include <string>
using namespace std;

bool checkValidAnagram(string str1, string str2)
{
    if (str1.length() != str2.length())
    {
        return false;
    }

    int count[26] = {0};
    for (int i = 0; i < str1.length(); i++)
    {
        count[str1[i] - 'a']++;
    }

    for (int i = 0; i < str2.length(); i++)
    {
        if (count[str2[i] - 'a'] == 0)
        {
            return false;
        }
        count[str2[i] - 'a']--;
    }
    return true;
}

int main()
{
    string str1, str2;
    cout << "Enter string 1: ";
    getline(cin, str1);
    cout << "Enter string 2: ";
    getline(cin, str2);

    bool result = checkValidAnagram(str1, str2);
    if (result)
    {
        cout << str1 << " and " << str2 << " are valid anagrams." << endl;
    }
    else
    {
        cout << str1 << " and " << str2 << " are not valid anagrams." << endl;
    }
    return 0;
}