#include <bits/stdc++.h>
using namespace std;
long long s[28];

char DV(int idx,int n)
{
    if (n == 1)
    {
        return 'g';
    }
    else if (n == 2 || n == 3)
    {
        return 'a';
    }
    int l = s[idx-1],mid = idx+3;
    if (n > l && n < l+mid)
    {
        if (n - l == 1)
        {
            return 'g';
        }
        else
        {
            return 'a';
        }
    }
    else if (n <= l)
    {
        DV(idx-1,n);
    }
    else
    {
        DV(idx-1,n-l-mid);
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, n;
    s[0] = 3;
    for (int i = 1; i < 28; i++)
    {
        s[i] = 2*s[i-1]+(i+3);
    }
    cin >> t;
    while (t--)
    {
        cin >> n;
        int idx = lower_bound(s,s+28,n)-s;
        cout << DV(idx,n) << "\n";
    }
}