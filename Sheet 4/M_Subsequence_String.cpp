#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string t = "hello";
    int j = 0;
    for(char c :s)
    {
        if(c ==t[j])
            j++;
    }

    if(j == 5)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}