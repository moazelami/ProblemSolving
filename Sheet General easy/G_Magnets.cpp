#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    int *arr = new int[test];
    for (size_t i = 0; i < test; i++)
    {
        cin >> arr[i];
    }
    int counter = 0;
    for (size_t i = 0; i < test; i++)
    {
        if(arr[i] != arr[i+1] || i == test - 1)
            counter++;
    }

    cout << counter;

    return 0;
}