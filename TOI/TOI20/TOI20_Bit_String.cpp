#include <bits/stdc++.h>
using namespace std;

const int N = 1<<21;
int V[N];

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int x,n,q,t;
    string str;
    cin >> n >> q;
    t = 1 << n;
    vector <int> DP,x2bit,x3bit;
    for (int i = 0; i < t; i++)
    {
        cin >> str >> x;
        int idx = 0;
        for (int j = 0; j < str.size(); j++)
        {
            idx <<= 1;
            idx += str[j]-'0';
        }
        
        V[idx] = x;
        DP.push_back(INT_MIN);
    }
    x2bit.push_back(1);
    for (int i = 1; i <= 20; i++)
    {
        x2bit.push_back(2*x2bit[i-1]);
        x3bit.push_back(x2bit[i]+x2bit[i-1]);
    }
    // for (int i = 0; i < 21; i++)
    // {
    //     cout << x2bit[i] << " ";
    // }
    // cout << "\n";
    // for (int i = 0; i < 20; i++)
    // {
    //     cout << x3bit[i] << " ";
    // }
    // cout << "\n";
    // sort(V.begin(),V.end());
    // for(auto [a,b]:V)
    // {
    //     cout << a << " ";
    // }
    DP[0] = V[0];
    for (int i = 0; i < t; i++)
    {
        // cout << i;
        // cout << "\n";
        for(auto k:x2bit)
        {
            int idx = i | k;
            if (idx == i)
            {
                continue;
            }
            if (idx > t)
            {
                break;
            }
            DP[idx] = max(DP[idx],DP[i] + V[idx]);
            // cout << idx << " ";
        }
        for(auto k:x3bit)
        {
            int idx = i | k;
            if (idx == i)
            {
                continue;
            }
            if (idx > t)
            {
                break;
            }
            DP[idx] = max(DP[idx],DP[i] + V[idx]);
            // cout << idx << " ";
        }
        // cout << "\n";
        // cout << DP[i] << " ";
    }
    // cout << "\n";
    for (int i = 0; i < q; i++)
    {
        int idx = 0;
        cin >>str;
        for (int i = str.length(); i >= 0; i--)
        {
            if (str[i] == '1')
            {
                // cout << str.length() - i -1 << " ";
                idx += x2bit[str.length() - i -1];
            }
        }
        // cout << "\n";
        cout << DP[idx] << "\n";
    }
    
    return 0;
}