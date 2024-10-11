#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int A[n];
        int B[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        B[0] = A[0];
        for (int i = 1; i < n; i++)
        {
            B[i] = B[i-1] + A[i];
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << B[i] << " ";
        // }
        for (int i = 0; i < n; i++)
        {
            if (B[i] - A[i] == B[n-1]-B[i])
            {
                cout << i+1 << "\n";
            }
        }
    }
}