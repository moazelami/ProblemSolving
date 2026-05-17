#include <iostream>
using namespace std;

int main()
{
    
    int password;
    while(true)
    {
        cin >> password;
        if (password != 1999)
        {
            cout << "Wrong" << endl;
        }
        else
        {
            cout << "Correct";
            break;
        }
    }

        return 0;
}