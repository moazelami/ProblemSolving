#include <iostream>
using namespace std;

void From1ToN(int n)
{
    for (int i = 1; i <= n;i++)
    {
        cout << i;
        if(i<n)
        {
            cout << " ";
        }
    }
}

int main()
{
    int n;
    cin >> n;
    From1ToN(n);

    return 0;
}