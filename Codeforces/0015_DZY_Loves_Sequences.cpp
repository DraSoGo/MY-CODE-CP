#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,mx = -1;
    cin >> n;
    long long A[n+1];
    vector <long long> V,QS;
    for (int i = 0; i <= n; i++)
    {
        cin >> A[i];
    }
    long long co = 1;
    A[n] = 0;
    for (int i = 1; i <= n; i++)
    {
        if (A[i] <= A[i-1])
        {
            if (V.size() != 0)
            {
                QS.push_back(QS.back()+co);
            }
            else
            {
                QS.push_back(co);
            }
            
            V.push_back(co);
            // cout << co << "\n";
            mx = max(mx,min(co+1,n));
            // cout << QS.back() << "\n";
            co = 1;
            continue;
        }
        co++;
    }
    for (int i = 0; i < V.size()-1; i++)
    {
        // cout << V[i] << " " << V[i+1] << "\n";
        if (A[QS[i]+1]-A[QS[i]-1] >= 2 || A[QS[i]]-A[QS[i]-2] >= 2)
        {
            // cout << "/\n";
            mx = max(mx,V[i]+V[i+1]);
        }
    }
    cout << mx;
    return 0;
}
