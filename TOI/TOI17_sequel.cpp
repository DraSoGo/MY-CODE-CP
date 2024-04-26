#pragma GCC optimize("O3,unroll-loops")
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m,a,b,c,sum;
    cin >> n >> m;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < m; i++)
    {
        sum = 0;
        cin >> a >> b >> c;
        a--;
        for (int j = a; j < c; j+=b)
        {
            sum += A[j];
        }
        cout << sum << " ";
    }
    
    return 0;
}