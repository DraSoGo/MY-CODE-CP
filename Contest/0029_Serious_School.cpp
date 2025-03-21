#include <bits/stdc++.h>
using namespace std;

struct SS
{
    int t,w;
    bool operator < (const SS&a)const
    {
        return a.w < w;
    }
};

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int s,n,a,b,w,l = 0,r = 0,sumt = 0,sumw = 0,mn = INT_MAX;
    vector <SS> V;
    cin >> s >> n;
    int c = 100-s;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> w;
        V.push_back({b-a+1,w});
    }
    sort(V.begin(),V.end());
    for(auto [i,j]:V)
    {
        cout << j << " " << i << "\n";
    }
    sumw = V[0].w;
    sumt = V[0].t;
    while (l <= r && r < n)
    {
        if (sumw < c)
        {
            r++;
            sumw += V[r].w;
            sumt += V[r].t;
            // cout << sumw << "\n";
        }
        else
        {
            // cout << sumt << "\n";
            // cout << "hi";
            mn = min(mn,sumt);
            sumw -= V[l].w;
            sumt -= V[l].t;
            l++;
        }
    }
    cout << mn;
    return 0;
}