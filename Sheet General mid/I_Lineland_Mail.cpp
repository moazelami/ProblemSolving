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
    for (int i = 0; i < size;i++)
    {
        if(i == 0)
        {
            cout <<arr[i + 1] - arr[i] << " "<< arr[i + size - 1] -arr[i] << endl;
        }
        else if(i == size - 1)
        {
            cout << arr[i] - arr[size - 2] << " " << arr[i] - arr[0] << endl;
        }
        else
        {
            cout << min(arr[i + 1] - arr[i], arr[i] - arr[i - 1]) << " " << max(arr[size - 1] - arr[i], arr[i] - arr[0]) << endl;
        }
    }

        return 0;
}