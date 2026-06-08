#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int *freq = new int[s.length()];
    for (size_t i = 0; i < s.length(); i++)
        freq[i] = 0;



    return 0;
}