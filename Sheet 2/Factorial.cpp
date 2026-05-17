#include <iostream>
using namespace std;

int main()
{
    int Case;
    cin >> Case;
    long long number , factorial = 1;
    for (int i = 1; i <= Case;i++)
    {
        cin >> number;
        for (int j = 2; j <= number; j++)
        {
            factorial *= j;
        }
        cout << factorial << endl;
        factorial = 1;
    }

        return 0;
}