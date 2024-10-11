#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t,q,n,a,b;
    map <set<pair<int,int>>,int> ANS;
    set<pair<int,int>> G;
    cin >> t >> q;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < n-1; j++)
        {
            cin >> a >> b;
            G.emplace(max(a,b),min(a,b));
        }
        ANS[G]++;
        G.clear();
    }
    for (int i = 0; i < q; i++)
    {
        cin >> n;
        for (int j = 0; j < n-1; j++)
        {
            cin >> a >> b;
            G.emplace(max(a,b),min(a,b));
        }
        cout << ANS[G] << "\n";
        G.clear();
    }
    return 0;
}