#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int d1;
    cin >> d1;
    int **arr = new int *[d1];

    for (size_t i = 0; i < d1; i++)
    {
        arr[i] = new int[d1];
    }

    for (size_t i = 0; i < d1; i++)
    {
        for (size_t j = 0; j < d1; j++)
        {
            cin >> arr[i][j];
        }
    }

    int MD = 0, SD = 0;

    for (size_t i = 0; i < d1; i++)
    {
       MD += arr[i][i];   
    }

    for (int i = 0; i < d1; i++)
    {
        SD += arr[i][d1 - i - 1];
    }

    cout << abs(MD - SD);
    return 0;
}