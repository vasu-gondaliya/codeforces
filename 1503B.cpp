// Author : Vasu Gondaliya
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> vx, vy;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i + j) % 2 == 0)
            {
                vx.push_back({i, j});
            }
            else
            {
                vy.push_back({i, j});
            }
        }
    }
    for (int i = 0; i < n * n; i++)
    {
        int a;
        cin >> a;
        int res;
        pair<int, int> q;
        if (vx.size() == 0)
        {
            q = vy.back();
            vy.pop_back();
            if (a == 1 || a == 3)
            {
                res = 2;
            }
            else
            {
                res = 3;
            }
        }
        else if (vy.size() == 0)
        {
            q = vx.back();
            vx.pop_back();
            if (a == 2 || a == 3)
            {
                res = 1;
            }
            else
            {
                res = 3;
            }
        }
        else
        {
            if (a == 2 || a == 3)
            {
                q = vx.back();
                vx.pop_back();
                res = 1;
            }
            else
            {
                q = vy.back();
                vy.pop_back();
                res = 2;
            }
        }
        cout << res << " " << q.first << " " << q.second << endl;
    }
    return 0;
}