#include <bits/stdc++.h>
using namespace std;
struct Job
{
    int id,dl,w;
    bool operator < (const Job & a)const
    {
        return w > a.w;
    }
};


int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    int vis[101];
    cin >> t;
    while (t--)
    {
        int n,sum = 0,cnt = 0;
        cin >> n;
        Job J[n];
        fill(vis,vis+101,0);
        for (int i = 0; i < n; i++)
        {
            cin >> J[i].id >> J[i].dl >> J[i].w;
        }
        sort(J,J+n);
        for (int i = 0; i < n; i++)
        {
            for (int j = J[i].dl; j > 0; j--)
            {
                if (!vis[j])
                {
                    cnt++;
                    sum += J[i].w;
                    vis[j] = 1;
                    break;
                }
            }
        }
        cout << cnt << " " << sum << "\n";
    }
    return 0;
}
