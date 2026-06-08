#include <iostream>
using namespace std;

int main()
{
    int d1, d2;
    cin >> d1 >> d2;
    int **arr = new int *[d1];

    for (int i = 0; i < d1; i++)
    {
        arr[i] = new int[d2];
    }

    for (size_t i = 0; i < d1; i++)
    {
        for (size_t j = 0; j < d2; j++)         
        {
            cin >> arr[i][j];
        }
    }

    int test;
    bool flag = false;
    cin >> test;

    for (size_t i = 0; i < d1; i++)
    {
        for (size_t j = 0; j < d2; j++)
        {
            if(arr[i][j] == test)
                flag = true;
        }
    }

    if(flag)
        cout << "will not take number";
    else
        cout << "will take number";

    delete[] arr;
    return 0;
}