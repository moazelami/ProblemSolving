#include <iostream>
using namespace std;

int main()
{
    bool flag = true;
    int size;
    int counter = 0;
    cin >> size;
    long long *arr = new long long[size];

    for (size_t i = 0; i < size; i++)
    {
        cin >> arr[i];
        if(arr[i] % 2 != 0)
            flag = false;
    }    

    while(flag)
    {
        for (size_t i = 0; i < size; i++)
        {
            arr[i] /= 2;
            if(arr[i] % 2 != 0)
                flag = 0;
        }
        counter++;
    }

    cout << counter;
    return 0;
}