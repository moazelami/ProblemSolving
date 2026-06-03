#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int flag = false;
    int size;
    cin >> size;
    int *arr1 = new int[size];
    int *arr2 = new int[size];
    for (size_t i = 0; i < size; i++)
        cin >> arr1[i];

    for (size_t i = 0; i < size; i++)
        cin >> arr2[i];

    sort(arr1, arr1 + size);
    sort(arr2, arr2 + size);

    for (size_t i = 0; i < size; i++)
    {
        if(arr1[i] == arr2[i])
            flag = true;
        else
        {
            flag = false;
            break;
        }
    }

    if(flag)
        cout << "yes";
    else
        cout << "no";
    return 0;
}