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
    int *all = new int[101];
    for (size_t i = 1; i <= size; i++)
    {
        cin >> arr[i];
        all[arr[i]] = i;
    }
    
    for (size_t i = 1; i <= size; i++)
    {
        cout << all[i] << " ";
    }
    
    
    

    return 0;
}