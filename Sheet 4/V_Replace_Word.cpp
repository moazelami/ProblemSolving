#include <iostream>
using namespace std;

int main()
{
    string s , res = "";
    cin >> s;
    for (int i = 0; i < s.size();i++)
    {
        if (!(s.substr(i, 5) == "EGYPT"))
        {
            cout << s[i];
        }
        else
        {
            cout << " ";
            i += 4;
        }
    }


    return 0;
}