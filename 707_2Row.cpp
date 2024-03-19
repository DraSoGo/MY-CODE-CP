#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,k,x,y,mx = 0;
    cin >> n >> k;
    pair<long long,long long> A[n];
    pair<long long,long long> V[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> x >> y;
        A[i] = {x,y};
        V[i] = {-1,-1};
    }
    sort(A,A+n);
    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < n; j++)
        {
            mx = max(j,mx);
            if (V[j].first == -1)
            {
                V[j] = A[i];
                break;
            }
            if (V[j].first != A[i].first && (V[j].second * k) + V[j].first < (A[i].second * k) + A[i].first)
            {
                //cout << " > " << (V[j].second * k) + V[j].first << " " << (A[i].second * k) + A[i].first << "\n";
                V[j] = A[i];
                break;
            }
        }
        // for(auto j:V)
        // {
        //     cout << j.first << " " << j.second << "\n";
        // }
        // cout << "\n";
    }
    cout << mx+1;
    return 0;
}