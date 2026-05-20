// The numbers between N and M inclusive separated by single space
// The message " sum ="
// The summation of all numbers between N and M inclusive
// The program should be TERMINATED as soon as any of these two numbers is less than or equal to zero and don't print any thing.
#include <iostream>
#include <cmath>
using namespace std;

void SequenceOfNumbersAndSum(int n , int m)
{
    int sum = 0;
   
        for (int i = min(n, m); i <= max(n, m); i++)
        {
            cout << i << " ";
            sum += i;
        }
        cout << "sum =" << sum << endl;
}

int main()
{
    int n, m;
    while(true)
    {
        cin >> n >> m;
        if(n > 0 && m > 0)
        {
            SequenceOfNumbersAndSum(n, m);
        }
        else
        {
            break;
        }
    }
    return 0;
}
