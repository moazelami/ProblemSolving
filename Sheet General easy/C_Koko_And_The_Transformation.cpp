#include <iostream>
using namespace std;

int main()
{
    int size1, size2 , sum1 = 0 , sum2 = 0;
    cin >> size1 >> size2;
    int *arr = new int[size1];
    int *all = new int[size2];
    for (size_t i = 0; i < size1; i++)
    {
        cin >> arr[i];
        sum1 += arr[i];
    }    

    for (size_t i = 0; i < size2; i++)
    {
        cin >> all[i];
        sum2 += all[i];
    }
    
    if(sum1 == sum2)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}