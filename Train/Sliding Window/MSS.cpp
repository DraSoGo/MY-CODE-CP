#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    int n,x,sum = 0,ans = INT_MIN;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum = max(x,sum+x);
        ans = max(sum,ans);
    }
    cout << ans;
    return 0;
}
/*
INPUT
7
2 3 -8 7 -1 2 3
OUTPUT
11
*/