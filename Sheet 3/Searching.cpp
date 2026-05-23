#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int size;
    cin >> size;
    long long *array = new long long[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    long long number;
    cin >> number;
    long long *found = find(array, array + size, number);
    if (found != array + size)
    {
        cout << found - array;
    }
    else
    {
        cout << -1;
    }

    return 0;
}