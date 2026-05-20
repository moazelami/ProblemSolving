#include <iostream>
using namespace std;

void PUMGame(int number)
{
    int j = 1;
    for (int i = 1; i <= number; i++)
    {
        int counter = 1;
        while(true)
        {
            cout << j << " ";
            counter++;
            if(counter == 4)
            {
                cout << "PUM" << endl;
                j += 2;
                break;
            }
            j++;
        }
    }
}

int main()
{
    int number;
    cin >> number;
    PUMGame(number);

    return 0;
}