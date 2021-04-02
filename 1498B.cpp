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
        int n, W;
        cin >> n >> W;
        int w[n];
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
        }
        sort(w, w + n, greater<int>());
        multiset<int, greater<int>> a;
        a.insert(W);
        for (int i = 0; i < n; i++)
        {
            int high = *a.begin();
            if (high < w[i])
            {
                a.insert(W - w[i]);
            }
            else
            {
                a.erase(a.begin());
                a.insert(high - w[i]);
            }
        }
        cout << a.size() << "\n";
    }
    return 0;
}