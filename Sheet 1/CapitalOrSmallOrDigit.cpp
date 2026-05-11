#include <iostream>
using namespace std;

int main()
{
    char w;
    cin >> w;
    if(w>=48 && w<=58 )
    {
        cout << "IS DIGIT" << endl;
    }else if(w >= 65 && w <= 96)
    {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }
    else if (w >= 97 && w <= 122)
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }
    return 0;
}