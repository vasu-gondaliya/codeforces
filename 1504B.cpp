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
        string a, b;
        cin >> n >> a >> b;
        int x[n] = {}, y[n] = {};
        if (a[0] == '0')
        {
            x[0] = 1;
        }
        if (b[0] == '0')
        {
            y[0] = 1;
        }
        for (int i = 1; i < n; i++)
        {
            x[i] = x[i - 1] + (a[i] == '0');
            y[i] = y[i - 1] + (b[i] == '0');
        }
        bool flag = true, inv = false;
        if (n % 2 == 1)
        {
            if (a[n - 1] != b[n - 1])
            {
                flag = false;
            }
        }
        for (int i = n - 1 - (n % 2); i >= 0; i -= 2)
        {
            if (flag == false)
            {
                break;
            }
            if (inv == false)
            {
                if (a[i] != b[i])
                {
                    if (x[i] == i + 1 - y[i] && (i + 1) / 2 == x[i])
                    {
                        inv = 1 - inv;
                    }
                    else
                    {
                        flag = false;
                        break;
                    }
                }
                else
                {
                    if (x[i] != y[i])
                    {
                        flag = false;
                        break;
                    }
                }
            }
            else
            {
                if (a[i] == b[i])
                {
                    if (x[i] == y[i] && (i + 1) / 2 == x[i])
                    {
                        inv = 1 - inv;
                    }
                    else
                    {
                        flag = false;
                        break;
                    }
                }
                else
                {
                    if (x[i] != i + 1 - y[i])
                    {
                        flag = false;
                        break;
                    }
                }
            }
            if (inv == false)
            {
                if (a[i - 1] != b[i - 1])
                {
                    flag = false;
                    break;
                }
            }
            else
            {
                if (a[i - 1] == b[i - 1])
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << "\n";
    }
    return 0;
}