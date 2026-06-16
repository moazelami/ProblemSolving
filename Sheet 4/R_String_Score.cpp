#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int size;
    cin >> size;
    string s;
    cin >> s;
    int score = 0;
    for (size_t i = 0; i < size; i++)
    {
        if(s[i] == 'V')
        {
            score += 5;
        }
        else if(s[i] == 'W')
        {
            score += 2;
        }
        else if (s[i] == 'X')
        {
            i++;
        }
        else if(s[i] == 'Y')
        {
            i++;
            s.push_back(s[i]);
            size++;
        }
        else if(s[i] == 'Z')
        {
            if(s[i+1] == 'V')
            {
                score /= 5;
                i++;
            }
            else if(s[i+1] == 'W')
            {
                score /= 2;
                i++;
            }
            
        }
    }

    cout << score;

    return 0;
}