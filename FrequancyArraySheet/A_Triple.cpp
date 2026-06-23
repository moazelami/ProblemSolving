#include <iostream>
#include <algorithm>
using namespace std;
const int MAXN = 200000 + 5;

int arr[MAXN];
int freq[MAXN];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test;
    cin >> test;

    while(test--)
    {
        int size;
        cin >> size;
        for (int i = 1; i <= 200001; i++)
            freq[i] = 0;
        
        for (size_t i = 0; i < size; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        int ans = -1;
        for (int i = 0; i < size ;i++)
        {
            if(freq[arr[i]] >= 3)
            {
                ans = arr[i];
                break;
            }

        }

        cout << ans << "\n";
    }

    return 0;
}