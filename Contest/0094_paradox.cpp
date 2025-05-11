#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,q,x,y,mn;
    cin >> n >> q;
    vector <pair<int,int>> V;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        V.push_back({x,y});
    }
    while (q--)
    {
        mn = INT_MAX;
        cin >> x >> y;
        for (int i = 0; i < n; i++)
        {
            mn = min(mn,abs(V[i].first - x)+abs(V[i].second - y));
        }
        cout << mn << "\n";
    }
    return 0;
}