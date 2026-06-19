#include <iostream>
#include <iomanip>
using namespace std;

double Average(double arr[] , int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum / size;
}

int main()
{
    cout << fixed << setprecision(7);
    int size;
    cin >> size;
    double *arr = new double[size];
    for (size_t i = 0; i < size; i++)
        cin >> arr[i];

    cout << Average(arr, size);

    return 0;
}