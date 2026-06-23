#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int size = s.size();
    for (int i = 0; i < size / 2; i++)
    {
        int j = size - i - 1;
        if(s[i] == '?' && s[j]== '?')
        {
            s[i] = s[j] = 'a';
        }
        else if(s[i] == '?')
        {
            s[i] = s[j];
        }
        else if(s[j] == '?')
        {
            s[j] = s[i];
        }
        else if(s[i] != s[j])
        {
            cout << -1;
            return 0;
        }
    }

    if (size % 2 == 1 &&s[size / 2] == '?')
        s[size / 2] = 'a';

    cout << s;

    return 0;
}