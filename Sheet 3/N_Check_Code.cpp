#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    if (s.size() != a + b + 1)
    {
        cout << "No";
        return 0;
    }

    if (s[a] != '-')
    {
        cout << "No";
        return 0;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (i == a)
            continue; 

        if (!isdigit(s[i]))
        {
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";

    return 0;
}