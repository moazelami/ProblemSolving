#include <bits/stdc++.h>
#include <climits>
using namespace std;

#define ll long long
#define endl '\n'

long long lcm(long long a, long long b)
{
    return a / gcd(a, b) * b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char a, slash , b , c ,d;
    cin >> a >> slash >> b >> c >> slash >> d;
    double x = a / b;
    double y = c / d;

    cout << lcm(x, y);

    return 0;
}