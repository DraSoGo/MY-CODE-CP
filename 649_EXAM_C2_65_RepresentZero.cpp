#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int k = 0,n,sum = 0,ans = 0,x;
    cin >> n;
    unordered_map <int,int> A;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum += x;
        if (sum == k)
        {
            ans++;
        }
        if (A.find(sum-k) != A.end())
        {
            ans+=A[sum-k];
        }
        A[sum]++;
    }
    cout << ans;
    return 0;
}