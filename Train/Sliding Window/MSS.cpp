#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    int n,x,mx = INT_MIN,sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum = max(sum+x,x);
        mx = max(mx,sum);
    }
    cout << mx;
    return 0;
}
/*
INPUT
7
2 3 -8 7 -1 2 3
OUTPUT
11
*/