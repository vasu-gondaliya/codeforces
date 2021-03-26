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
        int k = 0;
        set<int> s1;
        set<int, greater<int>> s2;
        int ans1[n], ans2[n];
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a > k)
            {
                ans1[i] = a;
                ans2[i] = a;
                for (int i = k + 1; i < a; i++)
                {
                    s1.insert(i);
                    s2.insert(i);
                }
                k = a;
            }
            else
            {
                ans1[i] = *s1.begin();
                s1.erase(s1.begin());
                ans2[i] = *s2.begin();
                s2.erase(s2.begin());
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans1[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++)
        {
            cout << ans2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}