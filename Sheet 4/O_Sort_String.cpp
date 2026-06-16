#include <iostream>
using namespace std;

int main()
{
    int size;
    string s;
    cin >> size >> s;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (s[j] > s[j + 1])
                swap(s[j], s[j + 1]);
        }
    }

    cout << s;

    return 0;
}