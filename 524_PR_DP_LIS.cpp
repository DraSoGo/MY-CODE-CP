#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int A[n],B[n],ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            B[i] = 1;
        }
        for (int i = 0; i < n; i++)
        {
            int mx = 0;
            for (int j = 0; j < i; j++)
            {
                if (A[i] > A[j])
                {
                    mx = max(B[j],mx);
                }
            }
            B[i] += mx;
            ans = max(ans,B[i]);
        }
        cout << ans << "\n";
    }
}