#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int counter = 0;

    for (size_t i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ' || s[i] == ',' || s[i] == '.' || s[i] == '?' || s[i] == '!')
        {
            if (i != 0 && (s[i - 1] >= 'a' && s[i - 1] <= 'z') || (s[i - 1] >= 'A' && s[i - 1] <= 'Z'))
            {
                counter++;
            }
        }
    }

    if ((s.back() >= 'a' && s.back() <= 'z') || (s.back() >= 'A' && s.back() <= 'Z'))
    {
        counter++;
    }

    cout << counter;

    return 0;
}