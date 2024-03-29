#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[10001];
    memset(A,0,sizeof(A));
    int n,a,mx = INT_MIN;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        A[a]++;
        mx = max(A[a],mx);
    }
    for (int i = 0; i < 10001; i++)
    {
        if (A[i] == mx)
        {
            cout << i << " ";
        }
    }
}