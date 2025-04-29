#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,m,k,co = 0,idx = 0;
    cin >> n >> m >> k;
    long long N[n],M[m];
    for (int i = 0; i < n; i++)
    {
        cin >> N[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> M[i];
    }
    sort(N,N+n);
    sort(M,M+m);
    for (int i = 0; i < n; i++)
    {
        for (int j = idx; j < m; j++)
        {
            if (M[j] >= N[i]-k && M[j] <= N[i] + k)
            {
                co++;
                idx = j+1;
                break;
            }
            if (M[j] > N[i]+k)
            {
                idx = j;
                break;
            }
        }
    }
    cout << co;
    return 0;
}