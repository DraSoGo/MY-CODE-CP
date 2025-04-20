#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int v,n = 9,mn = INT_MAX,num;
    int A[n];
    cin >> v;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        if (A[i] <= mn)
        {
            mn = A[i];
            num = i+1;
        }
    }
    if (mn > v)
    {
        cout << -1;
        return 0;
    }
    int len = v/mn;
    v -= len*mn;
    string ans = "";
    for (int i = 0; i < len; i++)
    {
        ans += num+'0';
    }
    for (int i = 0; i < len; i++)
    {
        for (int j = 9; j > num; j--)
        {
            // cout << v << " " << A[j-1]-mn << "\n";
            if (v >= A[j-1]-mn)
            {
                v -= A[j-1]-mn;
                ans[i] = j+'0';
                break;
            }
        }
    }
    cout << ans;
    return 0;
}