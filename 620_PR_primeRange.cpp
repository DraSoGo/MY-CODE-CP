#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a,n,co = 0;
    cin >> a >> n;
    int A[n];
    memset(A,0,sizeof(A));
    for (int i = 2; i < n; i++)
    {
        for (int j = i+i; j < n; j+=i)
        {
            A[j] = 1;
        }
    }
    for (int i = a; i < n; i++)
    {
        if (A[i] == 0)
        {
            co++;
        }
    }
    cout << co;
}