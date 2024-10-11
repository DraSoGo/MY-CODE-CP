#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int N[n];
    for (int i = 0; i < n; i++)
    {
        cin >> N[i];
    }
    sort(N,N+n);
    int sum = 0;
    int l = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            sum += N[i]*2;
            l = N[i];
        }
        else
        {
            sum += (l+N[i])*2;
            l += N[i];
        }
    }
    cout << sum;
}