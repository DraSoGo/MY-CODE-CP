#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k;
    cin >> n >> k;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    sort(A,A+n);
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n";
    int l = 0,r = n-1;
    while (l < r)
    {
        int mid = (l+r)/2;
        if (A[mid] > k)
        {
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    cout << l << " " << lower_bound(A,A+n,k)-A << " " << upper_bound(A,A+n,k)-A;
    return(0);
}