#include <iostream>
using namespace std;

void Pyramid(int number)
{
    for (int i = 1; i <= number;i++)
    {
        for (int j = 1; j <= i;j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    Pyramid(n);

    return 0;
}