#include <bits/stdc++.h>
#define forr(i, a, n) for (int i = a; i < n; i++)
using namespace std;
vector<int> V[(int)2e5 + 10];
int CHK[(int)2e5 + 10];
int n, e;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> e;
    forr(i, 0, e)
    {
        int a, b;
        cin >> a >> b;
        V[a].push_back(b);
        V[b].push_back(a);
    }

    int mx = -1;
    forr(i, 0, n)
    {
        for (auto j : V[i])
        {
            if (CHK[j] == CHK[i])
                CHK[j]++;
            mx = max(mx, CHK[j]);
        }
    }
    cout << mx + 1;

    return 0;
}