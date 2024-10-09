#include <bits/stdc++.h>
using namespace std;

long long md = 1e9+7;
long long A[600001];


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n,a;
    A[1] = 1;
    A[2] = 2;
    A[3] = 3;
    for (long long i = 4; i < 600000; i++)
    {
        A[i] = ((4*(A[i-1]%md))%md + (3*(A[i-2]%md))%md + (2*(A[i-3]%md))%md + 1)%md;
    }
    cin >> n;
    while (n--)
    {
        cin >> a;
        cout << A[a] << "\n";
    }
    
    return 0;
}   