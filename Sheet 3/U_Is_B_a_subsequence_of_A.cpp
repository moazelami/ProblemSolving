#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    
    int *arra = new int[n];
    int *arrb = new int[m];

    int j = 0;

    for (size_t i = 0; i < n; i++)
        cin >> arra[i];

    for (size_t i = 0; i < n; i++)
        cin >> arrb[i];
        
    for (size_t i = 0; i < n && j < m; i++)
    {
        if(arra[i] == arrb[j])
            j++;
    }

    if(j == m)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}