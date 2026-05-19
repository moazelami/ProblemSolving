#include <iostream>
using namespace std;

void LuckyNumber(int num1, int num2)
{
    int counter = 0;

    for (int i = num1; i <= num2; i++)
    {
        int ii = i;
        bool flag = true;

        while (ii != 0)
        {
            int moded = ii % 10;

            if (moded != 4 && moded != 7)
            {
                flag = false;
                break;
            }

            ii /= 10;
        }

        if (flag)
        {
            counter++;
            cout << i << " ";
        }
    }

    if (counter == 0)
    {
        cout << -1;
    }
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    LuckyNumber(n1, n2);

    return 0;
}