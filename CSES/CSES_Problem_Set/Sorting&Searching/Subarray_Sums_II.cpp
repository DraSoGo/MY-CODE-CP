#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,k,ans = 0,x,sum = 0;
    cin >> n >> k;
    map <long long,long long> M;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum += x;
        if (sum == k)
        {
            ans++;
        }
        if (M.find(sum-k)!=M.end())
        {
            ans += M[sum-k];
        }
        M[sum]++;
    }
    cout << ans;
    return 0;
}