#include <bits/stdc++.h>
using namespace std;
vector<int> A[(int)2e5+10];
int chk[(int)2e5+10];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, e, a, b, ans = 0;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        cin >> a >> b;
        A[a].push_back(b);
        A[b].push_back(b);
    }
    for (int i = 0; i < n; i++)
    {
        
        for (auto j : A[i])
        {
            if (chk[j] == chk[i])
            {
                chk[j]++;
            }
            ans = max(ans,chk[j]);
        }
    }
    cout << ans+1;
    return 0;
}
