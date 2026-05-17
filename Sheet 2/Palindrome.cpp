#include <iostream>
using namespace std;

int Palindrome(int number)
{
    long long reversedNumber = 0;

    while(number != 0)
    {
        long long moded= number % 10;
        reversedNumber = reversedNumber * 10 + moded;
        number /= 10;
    }
    return reversedNumber;
}

int main()
{
    int number;
    cin >> number;

    if(Palindrome(number) == number)
    {
        cout << Palindrome(number) << endl
             << "YES" << endl;
    }
    else
    {
        cout << Palindrome(number) << endl
             << "NO" << endl;
    }

    return 0;
}