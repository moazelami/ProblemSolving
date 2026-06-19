#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int x)
{
    if (x <= 1)
        return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return false;
    return true;
}

bool isPalindrome(int x)
{
    int temp = x, rev = 0;
    while (temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == x;
}

int countDivisors(int x)
{
    int cnt = 0;
    for (int i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            if (i * i == x)
                cnt++;
            else
                cnt += 2;
        }
    }
    return cnt;
}

// 1 max
int getMax(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        mx = max(mx, arr[i]);
    return mx;
}

// 2 min
int getMin(int arr[], int n)
{
    int mn = arr[0];
    for (int i = 1; i < n; i++)
        mn = min(mn, arr[i]);
    return mn;
}

// 3 primes
int countPrimes(int arr[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (isPrime(arr[i]))
            cnt++;
    return cnt;
}

// 4 palindromes
int countPalindromes(int arr[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (isPalindrome(arr[i]))
            cnt++;
    return cnt;
}

// 5 max divisors number
int maxDivisorsNumber(int arr[], int n)
{
    int bestNum = arr[0];
    int bestDiv = countDivisors(arr[0]);

    for (int i = 1; i < n; i++)
    {
        int d = countDivisors(arr[i]);

        if (d > bestDiv)
        {
            bestDiv = d;
            bestNum = arr[i];
        }
        else if (d == bestDiv)
        {
            bestNum = max(bestNum, arr[i]);
        }
    }
    return bestNum;
}

int main()
{
    int n;
    cin >> n;

    int arr[1000];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "The maximum number : " << getMax(arr, n) << "\n";
    cout << "The minimum number : " << getMin(arr, n) << "\n";
    cout << "The number of prime numbers : " << countPrimes(arr, n) << "\n";
    cout << "The number of palindrome numbers : " << countPalindromes(arr, n) << "\n";
    cout << "The number that has the maximum number of divisors : " << maxDivisorsNumber(arr, n) << "\n";

    return 0;
}