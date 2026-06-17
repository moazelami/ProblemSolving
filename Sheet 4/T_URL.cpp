#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    s += '&';
    string *arr = new string[5];
    int p1 = 0, p2 = 0, arrp = 0;

    for (int i = 0; i < s.size();i++)
    {
        if (s[i] == '=')
        {
            p1 = i + 1;
        }
        else if(s[i] == '&')
        {
            p2 = i - 1;
            arr[arrp] = s.substr(p1, p2 - p1 + 1);
            arrp++;
        }
    }
    string w[5] = { "username: ", "pwd: ", "profile: ","role: ","key: "};
    for (size_t i = 0; i < 5; i++)
    {
        cout << w[i] << arr[i] << endl;
    }
    

    return 0;
}