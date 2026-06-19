#include <iostream>
#include <algorithm>

using namespace std;

int Distinct(int arr[] , int size)
{
    sort(arr, arr + size);
    int number = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] != arr[i + 1])
            number++;
    }
    return number;
}

int main()
{
    int size;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size;i++)
        cin >> arr[i];

    cout << Distinct(arr, size);
    return 0;
}