#include <iostream>
#include <String>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int i = 0;
    while(i < s.length())
    {
        if(s[i] == '\\')
            break;
        cout << s[i];
        i++;
    }

    return 0;
}