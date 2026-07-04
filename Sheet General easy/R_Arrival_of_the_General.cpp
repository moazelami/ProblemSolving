#include <bits/stdc++.h>
#include <climits>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int size , mx = INT_MIN  , mn = INT_MAX;
    cin >> size;
    int *arr = new int[size];
    int maxPos = 0, minPos = 0;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
  
        if (arr[i] > mx)
        {
            mx = arr[i];
            maxPos = i; 
        }

        if (arr[i] <= mn)
        {
            mn = arr[i];
            minPos = i; 
        }
    }
    int ans = maxPos + (size - 1 - minPos);

    if (maxPos > minPos)
        ans--;

    cout << ans;
    return 0;
}