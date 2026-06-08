#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        string s;
        cin >> s;
        if (s.find("101") != string::npos || s.find("010") != string::npos)
            cout << "Good";
        else
            cout << "Bad";

        cout << endl;
    }

    return 0;
}