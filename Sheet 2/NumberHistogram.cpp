#include <iostream>
using namespace std;

void NumbersHistogram(char symbol ,  int number)
{
    for (int i = 1; i <= number;i++)
    {
        cout << symbol;
    }
    cout << endl;
}

int main()
{
    char symbol;
    int repeats, numbers;
    cin >> symbol >> repeats;
    for (int i = 1; i <= repeats;i++)
    {
        cin >> numbers;
        NumbersHistogram(symbol,  numbers);
    }
        return 0;
}