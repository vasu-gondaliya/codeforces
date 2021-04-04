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
        string s;
        cin >> n >> s;
        int z = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                z++;
            }
        }
        if (z % 2 == 1 || s[0] == '0' || s[n - 1] == '0')
        {
            cout << "NO"
                 << "\n";
        }
        else
        {
            cout << "YES"
                 << "\n";
            string a = "", b = "";
            int x = 0, y = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '1')
                {
                    if (x < z / 2)
                    {
                        a += "(";
                        b += "(";
                        x++;
                    }
                    else
                    {
                        a += ")";
                        b += ")";
                    }
                }
                else
                {
                    if (y == 0)
                    {
                        a += "(";
                        b += ")";
                    }
                    else
                    {
                        a += ")";
                        b += "(";
                    }
                    y = 1 - y;
                }
            }
            cout << a << "\n"
                 << b << "\n";
        }
    }
    return 0;
}