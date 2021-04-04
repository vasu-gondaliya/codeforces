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
        string s;
        cin >> s;
        int l = s.length();
        bool found = false;
        for (int i = 0; i <= l / 2; i++)
        {
            if (s[i] != s[l - i - 1])
            {
                if (s[i] != 'a' && s[l - i - 1] != 'a')
                {
                    s += "a";
                    found = true;
                    break;
                }
                else if (s[i] == 'a')
                {
                    s.insert(0, "a");
                    found = true;
                    break;
                }
                else if (s[l - i - 1] == 'a')
                {
                    s.insert(l - 1, "a");
                    found = true;
                    break;
                }
            }
            else if (s[i] == s[l - i - 1] && s[i] != 'a')
            {
                s.insert(i, "a");
                found = true;
                break;
            }
        }
        if (found)
        {
            cout << "YES"
                 << "\n"
                 << s << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
    return 0;
}