#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int times;
    cin >> times;
    long long number , container = 0;
    for (int i = 1; i <= times;i++)
    {
        cin >> number;
        container = max(container, number);
    }

    cout << container;

    return 0;
}