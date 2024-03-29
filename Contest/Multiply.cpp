#include <bits/stdc++.h>
using namespace std;
int main()
{
    int chm,chp,co = 0;
    string a,b;
    cin >> a >> b;
    string mx,mn;
    vector <int> x,y,z,ans;
    if (a.length() >= b.length())
    {
        mx = a;
        mn = b;
    }
    else
    {
        mx = b;
        mn = a;
    }
    for (int i = 0; i < mx.length(); i++)
    {
        x.push_back(mx[i] - '0');
    }
    for (int i = 0; i < mn.length(); i++)
    {
        y.push_back(mn[i] - '0');
    }
    for (int i = y.size()-1; i >= 0; i--)
    {
        chm = 0;
        chp = 0;
        for (int j = 0; j < co; j++)
        {
            z.push_back(0);
        }
        
        for (int j = x.size()-1; j >= 0; j--)
        {
            int m = (y[i] * x[j]) + chm;
            z.push_back(m%10);
            chm = m/10;
        }
        // for (int j = z.size()-1; j >= 0; j--)
        // {
        //     cout << z[j];
        // }
        // cout << "\n";
        if (i == y.size() - 1)
        {
            for (int j = ans.size()-1; j >= 0; j--)
            {
                cout << ans[j];
            }
            for (int j = 0; j < z.size(); j++)
            {
                ans.push_back(z[j]);
            }
        }
        else
        {
            while (ans.size() != z.size())
            {
                ans.push_back(0);
            }
            // for (int j = ans.size()-1; j >= 0; j--)
            // {
            //     cout << ans[j];
            // }
            // cout << "\n";
            for (int j = 0; j < z.size(); j++)
            {
                int p = ans[j] + z[j] + chp;
                ans[j] = (p%10);
                chp = p/10;
                //cout << chp << "";
            }
            if (chp != 0)
            {
                ans.push_back(chp);
            }
            
        }
        // cout << "\n";
        // cout << "\n";
        // cout << "\n";
        z.clear();
        co++;
    }
    for (int j = ans.size()-1; j >= 0; j--)
    {
        cout << ans[j];
    }
    
    return 0;
}