#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int size , counter = 0;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size;i++)
        cin >> arr[i];

    int *mn = min_element(arr, arr + size);
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == *mn)
            counter++;
    }

    if(counter % 2 == 0)
        cout << "Unlucky";
    else
        cout << "Lucky";

    delete[] arr;
    return 0;
}