#include <iostream>
#include <numeric>
#include <cmath>
using namespace std;

int main()
{
    int size;
    cin >> size;
    long long* array = new long long[size];
    for (int i = 0; i < size;i++)
    {
        cin >> array[i];
    }
    cout << abs(accumulate(array, array + size, 0LL));
    return 0;
}