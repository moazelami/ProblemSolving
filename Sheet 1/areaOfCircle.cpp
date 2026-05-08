#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double area(double r)
{
    double pi = 3.141592653;
    return (pi * pow(r, 2));
}

int main()
{
    double r;
    cin >> r;
    cout << fixed << setprecision(9);
    cout << area(r) << endl;
    return 0;
}