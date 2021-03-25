// Author : Vasu Gondaliya
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, m, x;
        cin >> n >> m >> x;
        long long a = (x - 1) % n, b = (x - 1) / n;
        cout << a * m + b + 1 << "\n";
    }
    return 0;
}