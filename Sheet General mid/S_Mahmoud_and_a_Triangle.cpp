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
    for (int i = 0; i < size;i++)
        cin >> arr[i];

    sort(arr, arr + size);
    
    bool flag = false;
    for (int i = 0; i < size - 2;i++)
    {
        if((arr[i] +arr[i+1]) > arr[i+2])
        {
            flag = true;
            break;
        }

    }
    if(flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}