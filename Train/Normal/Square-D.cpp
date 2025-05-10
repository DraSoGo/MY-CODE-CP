#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,q,x;
    cin >> n >> q;
    long long sz = ceil(sqrt(double(n)));
    long long SD[sz],A[n],ans;
    memset(SD,0,sizeof(SD));
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        SD[i/sz] += A[i];
    }
    while (q--)
    {
        int c,a,b;
        cin >> c >> a >> b;
        if (c == 2)
        {
            a--,b--;
            ans = 0;
            while (a <= b && a % sz != 0)
            {
                ans += A[a];
                a++;
            }
            while (a + sz - 1 <= b && a % sz == 0)
            {
                ans += SD[a/sz];
                a += sz;
            }
            while (a <= b)
            {
                ans += A[a];
                a++;
            }
            cout << ans << "\n";
        }
        else
        {
            a--;
            SD[a/sz] += b-A[a];
            A[a] = b;
        }
    }
    
    return 0;
}
/*
INPUT
8 4
3 2 4 5 1 1 5 3
2 1 4
2 5 6
1 3 1
2 1 4
OUTPUT
14
2
11
*/