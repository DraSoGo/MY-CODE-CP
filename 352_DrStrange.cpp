#include <bits/stdc++.h>
using namespace std;
int main()
{
    int b,ch1;
    string s,chs;
    cin >> b >> s;
    chs = s[0];
    for (int i = 0; i < b/2;i++)
    {
        ch1 = 0;
        if (i > 0)
        {
            chs = chs + s[i];
        }
        if (s.length() % chs.length() == 0)
        {
            for (int j = 0; j < b - chs.length() - 1;j++)
            {
                for (int k = 0; k < chs.length(); k++)
                {
                    if ((j*chs.length())+k == b)
                    {
                        ch1 = 2;
                        break;
                    }
                    
                    if (chs[k] != s[(j*chs.length())+k])
                    {
                        //cout << chs << " " << s << "\n";
                        //cout << " " << chs[k] << " " << k << " " << j << " " << i << " | " << s[(j*chs.length())+k] << " " << (j*chs.length())+k << "\n";
                        ch1 = 1;
                        break;
                    }
                }
                if (ch1 == 1 || ch1 == 2)
                {
                    break;
                }
            }
        }
        else
        {
            ch1 = 1;
            // break;
        }
        if (ch1 == 0 || ch1 == 2)
        {
            cout << i+1;
            break;
        }
    }
    if (ch1 == 1)
    {
        cout << b;
    }
    
}