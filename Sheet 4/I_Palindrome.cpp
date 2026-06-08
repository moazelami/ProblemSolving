#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string temp = s;
    reverse(s.begin(), s.end());
    if(temp == s)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}