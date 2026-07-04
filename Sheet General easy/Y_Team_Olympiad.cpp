#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int *arr = new int[n];
    int c1 = 0, c2 = 0, c3 = 0;
    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];
        if(arr[i] == 1)
            c1++;
        else if(arr[i] == 2)
            c2++;
        else
            c3++;
    }
    if (c1 == 0 || c3 == 0 || c2 == 0)
    {
        cout << 0;
        return 0;
    }

    int teamsNumber = min(c1, min(c2, c3));
    cout << teamsNumber << endl;    

    for (int i = 0; i < teamsNumber;i++)
    {
        int k = 0;
        int j = 1;
        while(j <= 3 && k < n)
        {
            if(arr[k] == j)
            {
                cout << k + 1 << " ";
                arr[k] = 0;
                j++;
                k = -1;
            } 
            k++;
        }
        cout << endl;
    }

    return 0;
}