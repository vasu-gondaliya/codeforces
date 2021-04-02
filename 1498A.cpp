// Author : Vasu Gondaliya
#include <bits/stdc++.h>
using namespace std;
long long sumDigits(long long int n)
{
    long long int sum = 0;
    while (n)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int x = n;
        while (__gcd(n, sumDigits(n)) <= 1)
        {
            n++;
        }
        cout << n << "\n";
    }
    return 0;
}