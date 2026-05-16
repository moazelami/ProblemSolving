#include <iostream>
using namespace std;

void EvenNumberLoop(int n)
{
    bool found = false;
    for (int i = 2; i <= n;i+=2)
    {
            cout << i << endl;
            found = true;
    }

    if(!found)
    {
        cout << -1 << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    EvenNumberLoop(n);

    return 0;
}