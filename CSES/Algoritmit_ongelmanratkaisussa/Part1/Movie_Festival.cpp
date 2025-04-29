#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,a,b,ans = 0,p = 0;
    map <int,int> MP;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        MP[a]++;
        MP[b+1]--;
    }
    for (auto [x,y]:MP)
    {
        cout << x << " " << y << " " << "\n";
        p += y;
        ans = max(ans,p);
    }
    cout << ans;
    return 0;
}