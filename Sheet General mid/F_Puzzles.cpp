#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int arr[m];
    int res[50];

    for (int i = 0; i < m;i++)
        cin >> arr[i];

    sort(arr, arr + m);
    for (int i = 0; i < m - n + 1;i++)
    {
        res[i] = arr[i + n - 1] - arr[i];
    }

    cout << *min_element(res, res + (m - n + 1));

    return 0;
}