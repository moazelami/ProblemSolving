/*
Number of test cases
convert number from decimal into binary
count number of ones in this number
print the decimal number from this ones
ex:
10 --> 1010
has "11" --> 3 in decimal form
*/

#include <iostream>
#include <cmath>
using namespace std;

long long ConvertToDecimal2(long long number)
{
    int OnesCounter = 0;
    for (long long i = number; i >= 1; i /= 2)
    {
        if(i % 2 != 0)
        {
            OnesCounter++;
        }
    }
    int i = 0;
    int TheConst = 2;
    int final = 0;
    while (i < OnesCounter)
    {
        final += pow(TheConst, i);
        i++;
    }
    return final;
}

int main()
{
    int NumberOfTestCases;
    long long Number;
    cin >> NumberOfTestCases;
    for (int i = 1; i <= NumberOfTestCases;i++)
    {
        cin >> Number;
        cout<<ConvertToDecimal2(Number)<<endl;
    }
        return 0;
}