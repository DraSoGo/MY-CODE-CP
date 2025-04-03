#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,x;
    cin >> n;
    bool A[n+1];
    memset(A,0,sizeof(A));
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        A[x] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!A[i])
        {
            cout << i;
            break;
        }
    }
    
    return 0;
}