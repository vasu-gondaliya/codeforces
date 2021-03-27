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
        int n, k;
        string s;
        cin >> n >> k >> s;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '*')
            {
                v.push_back(i);
            }
        }
        int ans = 1;
        if (v.front() != v.back())
        {
            ans++;
        }
        int cur = v[0];
        for (int i = 2; i < v.size(); i++)
        {
            if (v[i] - cur > k)
            {
                ans++;
                cur = v[i - 1];
            }
        }
        cout << ans << "\n";
    }
    return 0;
}