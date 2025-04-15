#include <bits/stdc++.h>
using namespace std;

struct G
{
    int a;
    bool operator < (const G&b)const
    {
        return b.a < a;
    }
};


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,q,x,ans = 0;
    priority_queue <G> PQ;
    cin >> n >> q;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        PQ.push({x});
    }
    while (PQ.size() > q+1)
    {
        auto [a] = PQ.top();
        PQ.pop();
        auto [b] = PQ.top();
        PQ.pop();
        // cout << a << " , " << b << " " << a*b << "\n";
        ans += a*b;
        PQ.push({a+b});
    }
    cout << PQ.size() << "\n";
    cout << ans;
    return 0;
}