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
    
    int test;
    cin>>test;
    int x, y;
    while(test--)
    {
        cin >> x;
        cin >> y;
        x--;
        int left = y - 1;
        int right = arr[x] - y;

        if(x>0)
            arr[x - 1] += left;

        if( x < size - 1 )
            arr[x + 1] += right;

        arr[x] = 0;
    }

    for (int i = 0; i < size;i++)
        cout << arr[i] << endl;

        return 0;
}