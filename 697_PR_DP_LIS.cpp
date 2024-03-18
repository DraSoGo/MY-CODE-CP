#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int DP[n],A[n],mx,ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            mx = 0;
            if (i == 0)
            {
                DP[i] = 1;
                continue;
            }
            
            for (int j = 0; j < i; j++)
            {
                //cout << A[i] << " " << A[j] << "\n";
                if (A[j] < A[i])
                {
                    mx = max(mx,DP[j]);
                }
            }
            DP[i] = mx+1;
            //cout << DP[i] << " ";
            ans = max(ans,DP[i]);
        }
        //cout << "\n";
        cout << ans << "\n";
        
    }
    return 0;
}