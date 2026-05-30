#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int *palindrome = new int[size];
    
    for (int i = 0; i < size; i++)
       cin >> palindrome[i];

    int *copyarr = new int[size];

    for (int i = 0; i < size;i++)
        copyarr[i] = palindrome[i];

    reverse(palindrome, palindrome + size);
    bool flag = true;
    for (int i = 0; i < size; i++)
    {
        if (!(copyarr[i] == palindrome[i]))
            flag = false;
    }
    if(flag)
        cout << "YES";
    else
        cout << "NO";
        return 0;
}