#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,co,mod = 1000000007;
    cin >> n;
    int A[n+1];
    A[0] = 1;
    for (int i = 1; i < n+1; i++)
    {
        co = 0;
        for (int j = 1; j <= 6; j++)
        {
            if (i-j < 0)
            {
                break;
            }
            co = (co + A[i-j]) % mod;
        }
        A[i] = co;
    }
    cout << co;
}