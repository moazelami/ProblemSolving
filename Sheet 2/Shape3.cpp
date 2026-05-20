#include <iostream>
using namespace std;

void Shape3(int rows)
{
    for (int i = rows; i >= 1; i--)
    {

        for (int j = rows - i; j >= 1; j--)
        {
            cout << " ";
        }
        for (int star = (2 * i - 1); star >= 1; star--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void Shape2(int rows)
{

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
            cout << " ";

        for (int star = 1; star <= (2 * i - 1); star++)
            cout << "*";

        cout << endl;

    }
}

int main()
{
    int rows;
    cin >> rows;
    Shape2(rows);
    Shape3(rows);
    return 0;
}