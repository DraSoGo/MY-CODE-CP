#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,x;
    cin >> n >> x;
    int A[n],l = 0,r = n-1;
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
    while (l <= r)
    {
        int m = (l+r)/2;
        if (A[m] == x)
        {
            cout << m;
            break;
        }
        if (x > A[m])
        {
            l = m+1;
            continue;
        }
        if (x < A[m])
        {
            r = m-1;
            continue;
        }
    }
    return 0;
}
/*
INPUT
10 11
1 9 7 21 2 16 3 8 90 11
OUTPUT
1 2 3 7 8 9 11 16 21 90 
6
*/