#include <iostream>
#include <cmath>
using namespace std;

int SumOfConsecutiveOddNumbers(int x , int y)
{
    int oddSum = 0;

    for (int i = min(x, y) + 1; i < max(x, y); i++)
    {
        if(i % 2 != 0)
        {
            oddSum += i;
        }
    }

    return oddSum;
}

int main()
{
    int x, y ,repeats;
    cin >> repeats;
    while(repeats != 0)
    {
        cin >> x >> y;
        cout<<SumOfConsecutiveOddNumbers(x, y)<<endl;
        repeats--;
    }

        return 0;
}