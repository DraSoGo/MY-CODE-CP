#include <bits/stdc++.h>
using namespace std;

const int sz = 2e7;
int a,b,sum = 0,co = 0,md = 1e9+7;
vector <int> P;
bool vis[sz];

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> a >> b;
    vis[0] = 1;
    vis[1] = 1;
    for (int i = 2; P.size() <= b; i++)
    {
        if (!vis[i])
        {
            for (int j = i+i; j <= sz; j+=i)
            {
                vis[j] = 1;
            }
            P.push_back(i);
        }
    }
    for (int i = a-1; i <= b-1; i++)
    {
        // cout << P[i] << "\n";
        sum = (sum+P[i])%md;
    }
    
    cout << sum;
    return 0;
}   