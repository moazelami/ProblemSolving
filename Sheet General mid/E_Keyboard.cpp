#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char v;
    string in;
    cin >> v >> in;
    string 
    l1 = "qwertyuiop",
    l2 = "asdfghjkl;",
    l3 = "zxcvbnm,./";

    for (int i = 0; i < in.size();i++)
    {
        for (int j = 0; j < 10;j++)
        {
            if(l1[j] == in[i])
            {
                if(v == 'R')
                {
                    cout << l1[j - 1];
                    break;
                }
                else
                {
                    cout << l1[j + 1];
                    break;
                }
            }
            else if (l2[j] == in[i])
            {
                if (v == 'R')
                {
                    cout << l2[j - 1];
                    break;
                }
                else
                {
                    cout << l2[j + 1];
                    break;
                }
            }
            else if (l3[j] == in[i])
            {
                if (v == 'R')
                {
                    cout << l3[j - 1];
                    break;
                }
                else
                {
                    cout << l3[j + 1];
                    break;
                }
            }
        }
    }

        return 0;
}