#include <iostream>
using namespace std;

int main()
{
    int size, number;
    cin >> size;
    cin >> number;
    int *arr = new int[size];
    for (size_t i = 0; i < size; i++)
        cin >> arr[i];

    int *freq = new int[number+1];
    for (int i = 0; i <= number; i++)
        freq[i] = 0;

    for (int i = 0; i < size; i++)
    {
        freq[arr[i]]++;
    }

    for (int i = 1; i <= number; i++)
    {
        cout << freq[i] << '\n';
    }

    return 0;
}
