/*
rows = 4
spaces = rows - 1
stars = 1 --> += 2
*/

#include <iostream>
using namespace std;

void Shape2(int rows)
{

    for (int i = 1; i <= rows;i++)
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

    return 0;
}