#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;
    long long *array = new long long[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
        if(array[i] > 0)
        {
            array[i] = 1;
        }
        else if(array[i] < 0)
        {
            array[i] = 2;
        }
    }
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";

        return 0;
}