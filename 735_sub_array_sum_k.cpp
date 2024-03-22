#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k,a,sum = 0,ans = 0;
    unordered_map <int,int> M;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        sum += a;
        if (sum == k)
        {
            ans++;
        }
        if (M.find(sum-k) != M.end())
        {
            ans += M[sum-k];
        }
        M[sum]++;
    }
    cout << ans;
    return 0;
}