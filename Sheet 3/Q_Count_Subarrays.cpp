#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int size, len = 1, ans = 0;
        cin >> size;
        int *arr = new int[size];

        for (int i = 0; i < size; i++)
            cin >> arr[i];

        for (size_t i = 0; i < size-1; i++)
        {
            if(arr[i+1] >= arr[i])
            {
                len++;
            }
            else
            {
                ans += len * (len + 1) / 2;
                len = 1;
            }
        }
        ans += len * (len + 1) / 2;
        cout << ans;
        cout << endl;
    }

    return 0;
}