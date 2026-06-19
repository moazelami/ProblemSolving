#include <iostream>
#include <algorithm>
using namespace std;

void MinAndMax(int arr[], int size)
{
    cout << *min_element(arr, arr + size) << " " << *max_element(arr, arr + size);
}

int main()
{
    int size;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size;i++)
        cin >> arr[i];

    MinAndMax(arr, size);

    return 0;
}