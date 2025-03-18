#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios::sync_with_stdio(0);cin.tie();cout.tie(0);
    int n,k;
    cin >> n >> k;
    int A[n],B[n],ida = 0,idb = 0,co = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }
    sort(A,A+n);
    sort(B,B+n,greater <int>());
    while (ida != n && idb != n)
    {
        if (A[ida] + B[idb] > k)
        {
            ida++;
            idb++;
            co++;
        }
        else
        {
            ida++;
        }
    }
    cout << co;
    return 0;
}