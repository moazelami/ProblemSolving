#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int row, col;
    cin >> row >> col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if(i % 2 != 0)
            {
                cout << "#";
            }
            else if(i % 2 == 0)
            {
                if (i % 4 != 0 && j == col)
                {
                    cout << "#";
                }
                else if (i % 4 == 0 && j == 1)
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }

                
            }
        }
        cout << endl;
    }

        return 0;
}