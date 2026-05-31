#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int size;
        cin >> size;
        int *arr = new int[size];
        
        for (int i = 0; i < size; i++)
            cin >> arr[i];

        for (int j = 0; j < size; j++)
        {
            int mx = INT_MIN;
            for (int k = j ; k < size ;k++)
            {
                mx = max(mx, arr[k]);
                cout << mx << " ";
            }
        }
        cout << endl;
        delete[] arr;
    }

    return 0;
}