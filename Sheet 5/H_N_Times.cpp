#include <iostream>
using namespace std;

void NTimes(char c , int number)
{
    while(number--)
    {
        cout << c << " ";
    }
    cout << endl;
}

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int number;
        char c;
        cin >> number >> c;
        NTimes(c, number);
    }

    return 0;
}