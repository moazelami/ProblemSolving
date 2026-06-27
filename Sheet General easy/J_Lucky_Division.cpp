#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

bool isLucky(int num)
{
    while(num != 0)
    {
        if(num % 10 != 4 && num % 10 != 7)
        {
            return false;
        }
        num /= 10;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    cin >> num;

    for (int i = 4; i <= num; i++)
    {
        if(isLucky(i) && num % i == 0)
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
        
    return 0;
}