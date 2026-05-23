/*
loop --> to number
loop --> number - 2
*/

#include <iostream>
using namespace std;

void EasyFibonacci(int number)
{
    long long first = 0, second = 1;

    for (int i = 0; i < number; i++)
    {
        if (i == 0)
        {
            cout << first << " ";
        }
        else if (i == 1)
        {
            cout << second << " ";
        }
        else
        {
            long long next = first + second;
            cout << next << " ";

            first = second;
            second = next;
        }
    }
}

int main()
{
    int number;
    cin >> number;
    EasyFibonacci(number);

    return 0;
}