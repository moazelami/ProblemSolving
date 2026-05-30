#include <iostream>
#include <numeric>
using namespace std;

int main()
{
    int size , sum = 0;
    cin >> size;
    char digit;

    for (int i = 0; i < size;i++)
    {
        cin >> digit;
        sum += (digit - '0');
    }

    cout << sum;

    return 0;
}