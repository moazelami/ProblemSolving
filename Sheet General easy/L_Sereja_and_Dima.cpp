
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

    int sereja = 0, dima = 0;
    int l = 0, r = size - 1;
    bool turn = true;

    while (l <= r)
    {
        int card;

        if (arr[l] > arr[r])
        {
            card = arr[l];
            l++;
        }
        else
        {
            card = arr[r];
            r--;
        }

        if (turn)
            sereja += card;
        else
            dima += card;

        turn = !turn;

        
    }
    cout << sereja << " " << dima;
    return 0;
}