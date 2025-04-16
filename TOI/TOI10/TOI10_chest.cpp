#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,m,x,s,t,mx = 0,idx = 0;
    map <long long,long long> M;
    cin >> m >> n;
    vector <pair<int,int>> V;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> s >> t;
        V.push_back({s,x});
        V.push_back({t+1,-x});
    }
    sort(V.begin(),V.end());
    // for (int i = 0; i < V.size(); i++)
    // {
    //     cout << V[i].first << " " << V[i].second << "\n";
    // }
    int j = 0;
    for (int i = 0; i < V.size(); i=j)
    {
        // cout << V[i].first << ": ";
        for (j = i; j < V.size() && V[i].first == V[j].first; j++)
        {
            long long w = V[j].second;
            // cout << w << " ";
            if (w > 0)
            {
                while (w > 1 && w % 7 == 0)
                {
                    M[7]++;
                    w /= 7;
                }
                while (w > 1 && w % 5 == 0)
                {
                    M[5]++;
                    w /= 5;
                }
                while (w > 1 && w % 3 == 0)
                {
                    M[3]++;
                    w /= 3;
                }
                while (w > 1 && w % 2 == 0)
                {
                    M[2]++;
                    w /= 2;
                }
            }
            else
            {
                w = abs(w);
                while (w > 1 && w % 7 == 0)
                {
                    M[7]--;
                    w /= 7;
                }
                while (w > 1 && w % 5 == 0)
                {
                    M[5]--;
                    w /= 5;
                }
                while (w > 1 && w % 3 == 0)
                {
                    M[3]--;
                    w /= 3;
                }
                while (w > 1 && w % 2 == 0)
                {
                    M[2]--;
                    w /= 2;
                }
            }
        }
        long long sum = 1;
        for(auto c:M)
        {
            if (c.first == 1 || c.second == 0)
            {
                continue;
            }
            sum *= c.second+1;
        }
        // cout << "\n" << sum << "\n";
        if (sum > mx)
        {
            mx = sum;
            idx = V[j].first-V[i].first;
        }
        else if (sum == mx)
        {
            mx = sum;
            idx+= V[j].first-V[i].first;
        }
    }
    cout << mx << " " << idx;
    return 0;
}