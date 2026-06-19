#include <iostream>
#include <algorithm>
using namespace std;

string toBinary(long long x)
{
    if(x == 0)
        return "0";

    string binary = "";
    while(x>0)
    {
        binary += char((x % 2) + '0');
        x /= 2;
    }

    return binary;
}

bool isPalindrome(string s)
{
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}

int main()
{
    long long n;
    cin >> n;
    if (n % 2 != 0 &&isPalindrome(toBinary(n)))
        cout << "YES";
    else
        cout << "NO";

        return 0;
}