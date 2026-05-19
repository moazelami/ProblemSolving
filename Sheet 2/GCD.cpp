#include <iostream>
#include <cmath>
using namespace std;

int GCD(int num1 , int num2)
{
    int intialValue = 0;
    int GCD = 1;
    for (int i = 2; i <= min(num1, num2); i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            intialValue = i;
            GCD = max(GCD, intialValue);
        }
    }
    return GCD;
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    cout << GCD(n1, n2);

    return 0;
}