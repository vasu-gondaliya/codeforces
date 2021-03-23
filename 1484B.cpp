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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        set<int> pos, neg;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] <= a[i + 1])
            {
                pos.insert(a[i + 1] - a[i]);
            }
            else
            {
                neg.insert(a[i] - a[i + 1]);
            }
        }
        if (pos.size() > 1 || neg.size() > 1)
        {
            cout << "-1";
        }
        else if (pos.size() == 0 || neg.size() == 0)
        {
            cout << "0";
        }
        else
        {
            int m = *pos.begin() + *neg.begin();
            int c = *pos.begin();
            bool flag = true;
            for (int i = 0; i < n; i++)
            {
                if (a[i] >= m)
                {
                    flag = false;
                    break;
                }
            }
            if (flag == true)
            {
                cout << m << " " << c;
            }
            else
            {
                cout << "-1";
            }
        }
        cout << "\n";
    }
    return 0;
}