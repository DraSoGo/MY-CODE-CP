#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,mx = 0,l = 0;
    set <int> S;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int r = 0; r < n; r++)
    {
        while (S.count(A[r]))
        {
            S.erase(A[l]);
            l++;
        }
        // cout << l << " " << r << "\n";
        S.insert(A[r]);
        mx = max(mx,r-l+1);
    }
    cout << mx;
    return 0;
}