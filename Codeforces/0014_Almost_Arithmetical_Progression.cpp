#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,co,ans = 0;
    cin >> n;
    int A[n],D[n-1];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        if (i >= i)
        {
            D[i-1] = A[i]-A[i-1];
        }
    }
    int j;
    for (int i = 0; i < n-1; i = j)
    {
        for (j = i+1; j < n-1; j++)
        {
            if (D[j] != -1*D[j-1])
            {
                break;
            }
        }
        ans = max(j-i,ans);
        // cout << i << " " << j << "\n";
    }
    cout << ans+1;
    return 0;
}
