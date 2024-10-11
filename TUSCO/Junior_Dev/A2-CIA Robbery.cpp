#include <bits/stdc++.h>
using namespace std;

long long A[100000];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n,x,y,mxidx = 0,mx = 0,z;
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        cin >> x >> y;
        z = abs(x)+abs(y);
        A[z]++;
    }
    for (long long i = 0; i < 100000; i++)
    {
        if (A[i] > mx)
        {
            mx = A[i];
            mxidx = i;
        }
    }
    cout << mxidx*2 << " " << mx;
    return 0;
}