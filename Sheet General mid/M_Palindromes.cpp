#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

bool isPalindrome(string s)
{
    string rev = s;
    reverse(rev.begin(), rev.end());

    return s == rev;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    if(!isPalindrome(s))
    {
        cout << s.size();
        return 0;
    }

    for (int i = 0; i < s.size();i++)
    {
        s.pop_back();
        if(!isPalindrome(s))
        {
            cout << s.size();
            return 0;
        }
        else
        {
            cout << 0;
            return 0;
        }
    }

        return 0;
}