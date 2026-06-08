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
        if(s.length()>10)
        {
            cout << *s.begin() << s.length() - 2 << *(s.end()-1) << endl;
        }
        else
        {
            cout << s << endl;
        }
    }

    return 0;
}