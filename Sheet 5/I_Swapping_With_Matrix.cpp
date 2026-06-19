#include <bits/stdc++.h>
using namespace std;

void swapRows(vector<vector<int>> &a, int x, int y)
{
    swap(a[x], a[y]);
}

void swapCols(vector<vector<int>> &a, int x, int y)
{
    int n = a.size();

    for (int i = 0; i < n; i++)
        swap(a[i][x], a[i][y]);
}

int main()
{
    int n, x, y;
    cin >> n >> x >> y;

    vector<vector<int>> a(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    x--;
    y--; // تحويل إلى 0-based indexing

    swapRows(a, x, y);
    swapCols(a, x, y);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}