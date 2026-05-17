#include <iostream>
using namespace std;

void Multiplicationtable(int number)
{
    for (int i = 1; i <= 12;i++)
    {
        cout << number << " * " << i << " = " << number * i << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    Multiplicationtable(n);

    return 0;
}