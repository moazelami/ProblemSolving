#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;
    long long **arr = new long long *[row];
    for (int i = 0; i < row; i++)
        arr[i] = new long long[col];

    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        reverse(arr[i], arr[i] + col);
    }
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cout<< arr[i][j]<<" ";
        }
        cout << '\n';
    }

    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;

    return 0;
}