#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;
    string s ;
    cin >> s;
    string sub = "";
    sub += s[0];
    for (int i = 1; i < size;i++)
    {
        if(s[i] != sub.back())
        {
            sub += s[i];
        }
    }
    cout << sub.length();

    return 0;
}