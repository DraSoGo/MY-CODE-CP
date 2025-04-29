#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m,x;
    cin >> n >> m;
    multiset <int> T;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        T.insert(x);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        auto idx = T.upper_bound(x);
        // auto idx = upper_bound(T.begin(),T.end(),x);
        if (idx == T.begin())
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << *(--idx) << "\n";
            T.erase(idx);
        }
    }
    
    return 0;
}