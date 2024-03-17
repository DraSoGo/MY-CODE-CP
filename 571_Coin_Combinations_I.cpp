#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,w;
    cin >> n >> w;
    vector <long long> A(n),B(w+1);
    for (int i = 0; i < w+1; i++)
    {
        B[i] = 0;
    }
    
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    B[0] = 1;
    sort(A.begin(),A.end());
    for (int i = 0; i < w+1; i++)
    {
        // cout << i << ": ";
        for (int j = 0; j < n; j++)
        {
            if (i-A[j] < 0)
            {
                break;
            }
            B[i] = (B[i] + B[i-A[j]]) % 1000000007;
            // cout << A[j] << ":" << B[i-A[j]] << " ";
        }
        // cout << "\n";
    }
    // for (int i = 0; i < w+1; i++)
    // {
    //     cout << i << ": " << B[i] << "\n";
    // }
    // cout << "\n";
    cout << B[w];
}