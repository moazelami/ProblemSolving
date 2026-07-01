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

    int *arr1 = new int[size];
    int *arr2 = new int[size];

    for (size_t i = 0; i < size; i++)
    {
        cin >> arr1[i];
        cin >> arr2[i];
    }
    bool var = true;
    
    for (size_t i = 0; i < size ; i++)
    {
        if(arr1[i] != arr2[i])
        {
            cout << "rated";
            return 0;
        }
    }
    
    for (size_t i = 0; i < size - 1; i++)
    {
        if (arr1[i] < arr1[i + 1])
        {
            var = false;
            break;
        }
    }

    if(var)
        cout << "maybe";
    else
        cout << "unrated";

    return 0;
}