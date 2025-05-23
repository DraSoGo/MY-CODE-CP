#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,d,x,y,mn = INT_MAX;
    set <pair<int,int>> S;
    vector <pair<int,int>> V;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        V.push_back({x,y});
    }
    sort(V.begin(),V.end());
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        d = sqrt(mn);
        while (V[i].first - V[j].first >= d)
        {
            S.erase({V[j].second,V[j].first});
            j++;
        }
        auto it1 = S.lower_bound({V[i].second-d,V[i].first});
        auto it2 = S.upper_bound({V[i].second+d,V[i].first});
        for (auto it = it1; it != it2; it++)
        {
            int dx = V[i].first - it->second;
            int dy = V[i].second - it->first;
            mn = min(mn,dx*dx+dy*dy);
        }
        S.insert({V[i].second,V[i].first});
    }
    cout << sqrt(double(mn));
    return 0;
}
/*
INPUT
6
2 3
12 30
40 50
5 1
12 10
3 4
OUTPUT
1.41421
*/