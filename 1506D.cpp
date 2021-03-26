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
        int n;
        cin >> n;
        map<int, int> cnt;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            cnt[a]++;
        }
        multiset<int> m;
        for (auto x : cnt)
        {
            m.insert(x.second);
        }
        while (m.size() > 1)
        {
            int a = *m.begin(), b = *m.rbegin();
            m.erase(m.begin());
            m.erase(--m.end());
            if (a > 1)
            {
                m.insert(a - 1);
            }
            if (b > 1)
            {
                m.insert(b - 1);
            }
        }
        int ans = 0;
        if (m.size() > 0)
        {
            ans = *m.begin();
        }
        cout << ans << "\n";
    }
    return 0;
}