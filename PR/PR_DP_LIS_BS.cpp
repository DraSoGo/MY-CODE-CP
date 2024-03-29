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
        vector <int> DP;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            if (i == 0)
            {
                DP.push_back(A[i]);
            }
            else
            {
                if (A[i] > DP.back())
                {
                    DP.push_back(A[i]);
                }
                else
                {
                    DP[lower_bound(DP.begin(),DP.end(),A[i])-DP.begin()] = A[i];
                }
            }
        }
        cout << DP.size() << "\n";
    }
    return 0;
}