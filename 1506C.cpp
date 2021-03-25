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
        string a, b;
        cin >> a >> b;
        int x = min(a.length(), b.length());
        while (x)
        {
            bool found = false;
            for (int i = 0; i <= a.length() - x; i++)
            {
                for (int j = 0; j <= b.length() - x; j++)
                {
                    if (a.substr(i, x) == b.substr(j, x))
                    {
                        found = true;
                        break;
                    }
                }
            }
            if (found == true)
            {
                break;
            }
            else
            {
                x--;
            }
        }
        cout << a.length() + b.length() - 2 * x << "\n";
    }
    return 0;
}