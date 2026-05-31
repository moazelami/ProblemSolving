#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main()
{
    int size, maxi = 0 , mini = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> size; 
    int *arr = new int[size];
    for (int i = 0; i < size;i++)
        cin >> arr[i];

    for (int j = 0; j < size;j++)
    {
        if(arr[j] < mn)
        {
            mini = j;
            mn = arr[j];
        }
        if (arr[j] > mx)
        {
            maxi = j;
            mx = arr[j];
        }
    }

        swap(arr[mini], arr[maxi]);

    for (int i = 0; i < size;i++)
        cout << arr[i] << " ";

    delete[] arr;

    return 0;
}