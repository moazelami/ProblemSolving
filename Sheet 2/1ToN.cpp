#include <iostream>
using namespace std;

void FirstLoop(int n)
{
    for (int i = 1; i <= n;i++)
        cout << i << endl;
}

int main()
{
    int n;
    cin >> n;
    FirstLoop(n);

    return 0;
}