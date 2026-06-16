#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string t = "";
    string *arr = new string[s.size()];
    int j = 0 ,k=0, counter = 0;
    for (size_t i = 0; i < s.size(); i++)
    {   
        if(s[i] == 'R')
        {
            j++;
        }
        else
        {
            j--;
        }
        t += s[i];
        if(j == 0)
        {
            arr[++k] = t;
            t = "";
            counter++;
        }
    }

    cout << counter;
    for (size_t i = 0; i <= k; i++)
    {
        cout << arr[i] << endl;
    }
    
    

    return 0;
}