#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long a,b,l,r,n,c;
    cin >> a >> b >> n;
    c = __gcd(a,b);
    vector <long long> V;
    for (long long i = 1; i <= c; i++)
    {
        if (c % i == 0)
        {
            V.push_back(i);
            // cout << i << " ";
        }
    }
    // cout << "\n";
    while (n--)
    {
        cin >> l >> r;
        long long idx = upper_bound(V.begin(),V.end(),r)-V.begin();
        idx--;
        // cout << V[idx] << "\n";
        if (V[idx] >= l && V[idx] <= r)
        {
            cout << V[idx] << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
        
    }
    
    return 0;
}