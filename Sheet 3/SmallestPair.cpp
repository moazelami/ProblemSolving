#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    
    int NO_case;
    cin >> NO_case;

    while (NO_case--)
    {
        int size;
        int idx = 0;
        cin >> size;
        int *arr = new int[size];
        int resSize = (size * (size - 1)) / 2;
        int *result = new int[resSize];
        for (int i = 0; i < size ; i++)
        {
            cin >> arr[i];
        }

            for (int i = 0; i < size - 1 ; i++)
            {
                for (int j = i; j < size ; j++)
                {
                    if (i < j)
                    {
                        int temp = arr[i] + arr[j] + ((j) - (i));
                        result[idx++] = temp;
                    }

                }
            }
            
            cout << *min_element(result, result + resSize) <<"\n";
            
            delete[] arr;
            delete[] result;
    }
    
    return 0;
}