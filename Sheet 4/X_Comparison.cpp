#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if (s.size() == 1)
    {
        cout << s;
        return 0;
    }

    string mi = "";
    for (int i = 1; i < s.size();i++)
    {
        string right = s.substr(0, i), left = s.substr(i);
        sort(left.begin(), left.end());
        sort(right.begin(), right.end());

        string complete = right + left;
        if(mi.empty())
            mi = complete;
        
        mi = min(mi, complete);
    }
    cout << mi;

    return 0;
}