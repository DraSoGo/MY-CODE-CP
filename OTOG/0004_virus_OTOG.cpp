#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,mn,mx = INT_MIN;
    cin >> a;
    int A[a],B[a];
    for (int i = 0; i < a; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < a; i++)
    {
        cin >> B[i];
    }
    sort(A,A+a);
    sort(B,B+a,greater <int>());
    for (int i = 0; i < a; i++)
    {
        mn = min(A[i],B[i]);
        mx = max(mx,mn);
    }
    cout << mx;
}