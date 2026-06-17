#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int ce = 0, cy= 0, cg = 0, cp= 0, ct = 0;
    for (int i = 0; i < s.size();i++)
    {
        if(s[i] == 'E' || s[i] =='e')
        {
            ce++;
        }
        else if (s[i] == 'g' || s[i] == 'G')
        {
            cg++;
        }
        else if (s[i] == 'Y' || s[i] == 'y')
        {
            cy++;
        }
        else if (s[i] == 'p' || s[i] == 'P')
        {
            cp++;
        }
        else if (s[i] == 't' || s[i] == 'T')
        {
            ct++;
        }
    }
    cout << min(ce, min(cg, min(cy, min(cp, ct))));

    return 0;
}