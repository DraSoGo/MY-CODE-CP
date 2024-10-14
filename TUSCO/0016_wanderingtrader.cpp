#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,x;
    cin >> n;
    int A[n+2];
    vector <int> V;
    V.push_back(0);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 1; i < n-1; i++)
    {
        if (A[i] < A[i-1] && A[i] < A[i+1])
        {
            // cout << i << " ";
            V.push_back(i);
        }
    }
    V.push_back(n-1);
    // cout << "\n";
    for (int i = 1; i < V.size(); i++)
    {
        cout << V[i]-V[i-1]+1 << " ";
    }
    
    return 0;
}