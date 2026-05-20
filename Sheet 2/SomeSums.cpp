/*
N , A , B
N = first loop 1 --> N
--> [ A , B ]
ex :
N = 12
A = 2 , B = 5
1 + 2 = 3
3 --> [2 , 5]
add to Sum
*/

#include <iostream>
using namespace std;

long long SomeSums(int N , int A , int B)
{

    int endSum = 0;
    for (int i = 1; i <= N; i++)
    {
        int sum = 0;
            int temp = i;
            while (temp != 0)
            {
                long long moded = temp % 10;
                sum += moded;
                temp /= 10;
            }
            if(sum>=A && sum<=B)
            {
                endSum += i;
            }

    }
    return endSum;
}

int main()
{
    int a, b, n;
    cin >> n >> a >> b;
    cout<<SomeSums(n, a, b);

    return 0;
}