#include <iostream>
using namespace std;

void NumLoop(int n)
{
    int numbers;
    int even = 0,
     odd = 0, 
     posi = 0, 
     nega = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> numbers;
        if(numbers % 2 == 0 || numbers == 0)
        {
            even++;
        }
        else if(numbers % 2 != 0)
        {
            odd++;
        }
        
        if(numbers > 0 )
        {
            posi++;
        }
        else if(numbers < 0)
        {
            nega++;
        }
    }

    cout << "Even: " << even << endl
         << "Odd: " << odd << endl
         << "Positive: " << posi << endl
         << "Negative: " << nega << endl;
}

int main()
{
    int n;
    cin >> n;

    NumLoop(n);

    return 0;
}