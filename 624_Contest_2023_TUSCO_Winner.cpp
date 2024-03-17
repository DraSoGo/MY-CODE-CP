#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k;
    int co = 0;
    cin >> n >> k;
    int N[n];
    for (int i = 0; i < n; i++)
    {
        cin >> N[i];
    }
    sort(N,N+n);
    for (int i = 0; i < n; i++)
    {
        if (N[i] >= N[k-1])
        {
            co++;
        }
    }
    cout  << co;
}