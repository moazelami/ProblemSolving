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
    int *all = new int[size];
    for (size_t i = 0; i < size; i++)
    {
        cin >> arr[i];
        all[i] = i+1;
    }
    
    
    

    return 0;
}