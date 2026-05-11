#include <iostream>
using namespace std;

int main()
{
    char w;
    cin >> w;

    if (w >= 65 && w <= 96)
    {
        cout << char(w + 32) << endl;
    }
    else if (w >= 97 && w <= 122)
    {
        cout << char(w - 32) << endl;
    }
    return 0;
}