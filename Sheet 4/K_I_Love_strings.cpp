#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        string s, t;
        cin >> s >> t;
        int p1 = 0, p2 = 0;
        while(p1<s.size()||p2<t.size())
        {
            if (p1 < s.size() && p2 < t.size())
            {
                cout << s[p1] << t[p2];
                p1++;
                p2++;
            }
            else
            {
                if(p1<s.size())
                {
                    cout << s[p1];
                    p1++;
                }
                else
                {
                    cout << t[p2];
                    p2++;
                }
            }
        }
        cout << endl;
    }
}