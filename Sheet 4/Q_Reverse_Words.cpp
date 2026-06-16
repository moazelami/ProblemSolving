#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int p1 = 0, p2;
    for (size_t i = 0; i < s.size(); i++)
    {
        if(s[i] == ' ')
        {
            p2 = i - 1;
            reverse(s.begin() + p1, s.begin() + p2 + 1);
            p1 = i + 1;
        }
    }

    p2 = s.size() - 1;
    reverse(s.begin() + p1, s.begin() + p2 + 1);

    cout << s;

    return 0;
}