#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int size, maximum, waste ;
    cin >> size >> maximum >> waste;
    int orange[size];

    for (size_t i = 0; i < size; i++)
        cin >> orange[i];

    int wasteCounter = 0;
    int counter = 0;

    for (size_t i = 0; i < size; i++)
    {
        if(orange[i] <= maximum)
        {
            wasteCounter += orange[i];
        }

        if(wasteCounter > waste)
        {
            counter++;
            wasteCounter = 0;
        }
    }

    cout << counter;

    return 0;
}