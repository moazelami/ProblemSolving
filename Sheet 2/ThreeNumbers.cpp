/*
K , S
XYZ <= K
X+Y+Z=S
*/

#include <iostream>
using namespace std;

int ThreeNumbers(int K , int S)
{
    int counter = 0;
    
    for (int x = 0; x <= K;x++)
    {
        for (int y = 0; y <= K;y++)
        {
            int z = S - (x + y);
            if (z >= 0 && z <= K && x + y + z == S)
            {
                counter++;
            }
            
        }
    }
    return counter;
}

int main()
{
    int k, s;
    cin >> k >> s;
    cout<<ThreeNumbers(k, s);

    return 0;
}