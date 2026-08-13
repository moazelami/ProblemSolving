#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int size;
    cin >> size;
    int arr[size];
    int total = 0;
    for (int i = 0; i < size;i++)
    {
        cin >> arr[i];
        total += arr[i];
    }

    sort(arr, arr + size);
    int sum = 0 , counter = 0;
    for (int i = 0; i < size;i++)
    {
        sum += arr[size - i - 1];
        counter++;
        if (sum > total - sum)
        {
            cout << counter;
            return 0;
        }
    }

        return 0;
}