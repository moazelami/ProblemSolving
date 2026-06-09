#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int *freq = new int[256];
    for (int i = 0; i < 256; i++)
        freq[i] = 0;

    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i]]++;
    }

    for (char c = 'a'; c <= 'z'; c++)
    {
        if(freq[c] > 0)
            cout << c << " : " << freq[c] << endl;
    }

    return 0;
}