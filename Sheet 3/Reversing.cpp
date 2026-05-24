#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int *array = new int[size];

    for (int i = 0; i < size; i++)
        cin >> array[i];

    for (int i = size-1; i > -1;i--)
        cout << array[i]<<" ";

        return 0;
}