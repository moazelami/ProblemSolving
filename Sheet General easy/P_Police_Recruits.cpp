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
    int *arr = new int[size];
    for (int i = 0; i < size;i++)
        cin >> arr[i];

    int crimes = 0, officer = 0;
    if(arr[0] > 0)
        officer += arr[0];
    else
        crimes++;
    for (int i = 1; i < size; i++)
    {

        if(arr[i] == -1)
        {
            if(officer > 0)
                officer--;
            else
                crimes++;
        }
        else
            officer += arr[i];

    }

    cout << crimes;

    return 0;
}