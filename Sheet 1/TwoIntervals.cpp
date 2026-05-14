#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    long long Min, Max;
    Max = max(l1, l2);
    Min = min(r1, r2);

    if(Min>=Max)
    {
        cout << Max << " " << Min << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
    return 0;
}