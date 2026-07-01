#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int size = s.size() - (s.size()/2);
    int *arr = new int[size];
    int j = 0;
    for (size_t i = 0; i <s.size() ; i++)
    {
        if(s[i] != '+')
            arr[j++] = (s[i] - '0');
    }
    
    for (size_t i = 0; i < size -1 ; i++)
    {
        for (size_t j = 0; j < size - i -1 ; j++)
        {
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j + 1]);
        }
    }

    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i];
        if(i != size - 1)
            cout << "+";
    }
    

    return 0;
}