#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,k,ans = 0;
    set <long long> S;
    map <long long,long long> MP;
    cin >> n >> k;
    long long A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    long long l = 0,r = 0,ll;
    while (r < n)
    {
        S.insert(A[r]);
        MP[A[r]]++;
        while (S.size() > k)
        {
            MP[A[l]]--;
            if (MP[A[l]] == 0)
            {
                // ans += ((r-ll) * (r-ll+1))/2-1;
                // cout << r-l << "\n";
                S.erase(A[l]);
            }
            l++;
        }
        // cout << l << " " << r << " " << r-l+1 << "\n";
        ans+=r-l+1;
        r++;
    }
    // cout << r-l << "\n";
    // ans += ((r-l) * (r-l+1))/2;
    // cout << l << " " << r << "\n";
    cout << ans;
    return 0;
}