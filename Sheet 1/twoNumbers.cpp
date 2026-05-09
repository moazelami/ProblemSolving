#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    double x, y , Floor , Ceil , Round;
    cin >> x >> y;
    Floor = floor(x / y);
    Ceil = ceil(x / y);
    Round = round(x / y);

    cout << "floor " << x << " / " << y << " = " << Floor << endl;
    cout << "ceil " << x << " / " << y << " = " << Ceil << endl;
    cout << "round " << x << " / " << y << " = " << Round << endl;
    return 0;
}