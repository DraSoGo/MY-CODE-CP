#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie();
    int n,m,k,x;
    cin >> n >> m >> k;
    int A[n];
    vector <int> V;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (i == 0)
        {
            A[i] = x;
        }
        else
        {
            A[i] = A[i-1]+x;
        }
        if (i == m-1)
        {
            V.push_back(A[i]);
        }
        else if (i > m-1)
        {
            V.push_back(A[i]-A[i-m]);
        }
    }
    sort(V.begin(),V.end(),greater <int> ());
    // for(auto i:V)
    // {
    //     cout << i << "\n";
    // }
    cout << V[k-1];
    return 0;
}