#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int* array = new int[size];
    
    for (int i = 0; i < size;i++)
        cin >> array[i];

    for (int i = 0; i < size;i++)
    {
        if(array[i] <= 10)
        {
            cout << "A[" << i << "] = " << array[i] << endl;
        }
    }
        return 0;
}