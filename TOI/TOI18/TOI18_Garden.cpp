#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,q,x,idx;
    cin >> n >> q;
    long long A[n],ansl[n],ansr[n];
    vector <long long> L;
    vector <long long> R;
    for (long long i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (long long i = 0; i < n; i++)
    {
        idx = lower_bound(L.begin(),L.end(),A[i])-L.begin();
        if (idx == L.size())
        {
            L.push_back(A[i]);
        }
        else
        {
            L[idx] = A[i];
        }
        ansl[i] = idx;
    }
    // for(auto i:ansl)
    // {
    //     cout << i << " ";
    // }
    // cout << "\n";
    for (long long i = n-1; i >= 0; i--)
    {
        idx = lower_bound(R.begin(),R.end(),A[i])-R.begin();
        if (idx == R.size())
        {
            R.push_back(A[i]);
        }
        else
        {
            R[idx] = A[i];
        }
        ansr[i] = idx;
    }
    // for(auto i:ansr)
    // {
    //     cout << i << " ";
    // }
    // cout << "\n";
    for (long long i = 0; i < q; i++)
    {
        cin >> x;
        cout << min(ansl[x],ansr[x]) << "\n";
    }
    return 0;
}