#include <bits/stdc++.h>
using namespace std;
bool cmd(pair <int,int> a,pair <int,int> b)
{
    if (a.first != b.first)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}
int main()
{
    int n,s,e,mx = 0,co = 0;
    vector <pair<int,int>> V;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s >> e;
        V.push_back({s,1});
        V.push_back({e,2});
    }
    sort(V.begin(),V.end(),cmd);
    for (int i = 0; i < V.size(); i++)
    {
        if (V[i].second == 2)
        {
            co--;
        }
        else
        {
            co++;
        }
        mx = max(mx,co);
    }
    cout << mx;
}