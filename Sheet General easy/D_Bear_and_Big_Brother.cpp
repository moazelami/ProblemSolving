#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    int counter = 0;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        counter++;
    }

    cout << counter;

    return 0;
}