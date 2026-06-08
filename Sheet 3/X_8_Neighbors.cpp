#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;
    char **arr = new char *[row];
    for (int i = 0; i < row; i++)
        arr[i] = new char[col];

    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    int x, y;
    cin >> x >> y;

    x--;
    y--;

    for (int i = x - 1; i <= x + 1; i++)
    {
        for (int j = y - 1; j <= y + 1; j++)
        {
            if(i == x && j == y)
                continue;

            if(i<0 || i>=row || j<0 || j>=col)
                continue;

            if (arr[i][j] != 'x')
            {
                cout << "no";
                return 0;
            }
            

        }
    }
    cout << "yes";
    return 0;
}