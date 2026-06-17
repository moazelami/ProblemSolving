#include <iostream>
using namespace std;

int main()
{
    int q;
    cin >> q;
    string s;
    cin >> s;
    string k = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/",
           o = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    int *arr1 = new int[150];
    int *arr2 = new int[150];

    for (size_t i = 0; i < k.size(); i++)
    {
        arr1[k[i]] = o[i];
        arr2[o[i]] = k[i];
    }

    for (size_t i = 0; i < s.size(); i++)
    {
        if(q==1)
        {
            cout <<(char) arr2[s[i]];
        }
        else
        {
            cout <<(char) arr1[s[i]];
        }
    }
    
    
    return 0;
}