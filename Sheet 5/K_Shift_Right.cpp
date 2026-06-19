#include <iostream>
using namespace std;

void SiftRight(int arr[] , int size , int x)
{
    if(x > size)
        x = x % size;

    for (int i = size - x; i <size ; i++)
    {
        cout << arr[i] << " ";
        
    }

    for (int i = 0; i < size - x;i++)
        cout << arr[i] << " ";
}

int main()
{
    int size , x;
    cin >> size >>x;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    
    SiftRight(arr, size, x);

    return 0;
}