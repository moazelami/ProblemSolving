#include <iostream>
using namespace std;

void ShiftZeros(int arr[] , int size)
{
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] != 0)
        {
            arr[counter] = arr[i];
            counter++;
        }
    }

    while(counter < size)
    {
        arr[counter] = 0;
        counter++;
    }
}

int main()
{
    int size;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    
    ShiftZeros(arr, size);

    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}