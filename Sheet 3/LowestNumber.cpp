#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int *array = new int[size];

    for (int i = 0; i < size; i++)
        cin >> array[i];

    int Min = array[0];
    int pos = 1;
    for (int i = 0; i < size; i++)
    {
        if (array[i] < Min)
        {
            Min = array[i];
            pos = i + 1;
        }
    }

    cout << Min << " " << pos << endl;

    return 0;
}