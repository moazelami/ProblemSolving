#include <iostream>
using namespace std;

void NewArray(int arr[] , int att[] , int size)
{
    for (int i = 0; i < size; i++)
        cout << att[i] << " ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int main()
{
    int size;
    cin >> size;
    int *arr = new int[size];
    int *att = new int[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    for (int i = 0; i < size; i++)
        cin >> att[i];

    NewArray(arr, att, size);
    return 0;
}