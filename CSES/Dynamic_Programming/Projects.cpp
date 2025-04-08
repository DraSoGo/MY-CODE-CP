#include <bits/stdc++.h>
using namespace std;

struct PJ
{
    long long a,b,p;
    bool operator < (const PJ&x)const
    {
        if (b == x.b)
        {
            return a < x.a;
        }
        return b < x.b;
    }
};


int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,a,b,p,mx = 0;
    cin >> n;
    vector <PJ> V;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> p;
        V.push_back({a,b,p});
    }
    sort(V.begin(),V.end());
    map <long long,long long> DP;
    DP[0] = 0;
    for (auto [x,y,c] : V)
    {
        // cout << x << " " << y << " " << c << "\n";
        auto idx = DP.lower_bound(x);
        idx--;
        mx = max(idx->second+c,mx);
        DP[y] = mx;
    }
    cout << mx;
    return 0;
}