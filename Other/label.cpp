
#include <bits/stdc++.h>
using namespace std;
main()
{
    int f[26],a,b;
    cin >> a;
    for (int i = 0; i < 26; i++)
    {
        f[i] = 0;
    }
    for (int i = 0; i < 2*a; i++)
    {
        string n;
        cin >> n;
        for (int j = 0; j < n.length(); j++)
        {
            int c = int(n[j]);
            if (c >= 65 && c <= 90)
            {
            f[c - 65]++;
            }
            else
            {
            f[c - 97]++;
            }
        }
    }
    for (int i = 0; i < 26; i++)
    {
        char h = char(i + 65);
        cout << h << "=" << f[i] << "\n";
    }
}