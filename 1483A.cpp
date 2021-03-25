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
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(m);
        int a[m], cnt[n + 1] = {}, mxi = 0;
        for (int i = 0; i < m; i++)
        {
            int k;
            cin >> k;
            v[i].resize(k);
            for (int j = 0; j < k; j++)
            {
                cin >> v[i][j];
            }
            a[i] = v[i][0];
            cnt[v[i][0]]++;
            if (cnt[v[i][0]] > cnt[mxi])
            {
                mxi = v[i][0];
            }
        }
        int maxGames = (m + 1) / 2;
        if (cnt[mxi] > maxGames)
        {
            for (int i = 0; i < m; i++)
            {
                if (v[i][0] == mxi && v[i].size() > 1)
                {
                    a[i] = v[i][1];
                    cnt[mxi]--;
                    cnt[v[i][1]]++;
                    if (cnt[mxi] == maxGames)
                    {
                        break;
                    }
                }
            }
        }
        if (cnt[mxi] > maxGames)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES\n";
            for (int i = 0; i < m; i++)
            {
                cout << a[i] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}