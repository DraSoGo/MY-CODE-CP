#include <bits/stdc++.h>
using namespace std;

bool cmd(pair<int,int> a,pair<int,int> b)
{
    return a.first > b.first;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n,s,ans = 0;
        cin >> n;
        vector <pair<int,int>> V,A;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            V.push_back({s,i});
            A.push_back({s,i});
        }
        sort(V.begin(),V.end(),cmd);
        for (int i = 0; i < n; i++)
        {
            int co = 0;
            for (int j = 0; j < n; j++)
            {
                //cout << A[i].first << " " << V[j].first << " = " << ans << "\n";
                if (V[j].first < A[i].first)
                {
                    break;
                }
                if (V[j].first > A[i].first && V[j].second < i)
                {
                    ans++;
                }
            }
        }
        cout << ans << "\n";
        // V.clear();
        // A.clear();
    }
    return 0;
}