#include <bits/stdc++.h>
using namespace std;

const int sz = 8e6;
bool vis[sz];
vector <int> P;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    for (int i = 2; i < sz; i++)
    {
        if (!vis[i])
        {
            P.push_back(i);
            for (int j = i+i; j < sz; j+=i)
            {
                vis[j] = 1;
            }
        }
    }
    // cout << P.size() << "\n";
    int n;
    cin >> n;
    cout << P[n-1];
    return 0;
}