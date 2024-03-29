#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,w;
    cin >> n >> w;
    vector <int> A(n),B(w+1);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < w+1; i++)
    {
        B[i] = 9999999;
    }
    sort(A.begin(),A.end());
    B[0] = 0;
    for (int i = 1; i < w+1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i-A[j] < 0)
            {
                break;
            }
            B[i] = min(B[i],1+B[i-A[j]]);
        }
    }
    // for (int i = 0; i <= w; i++)
    // {
    //     cout << B[i] << "\n";
    // }
    // cout << "\n";
    if (B[w] == 9999999)
    {
        B[w] = -1;
    }
    
    cout << B[w];
}