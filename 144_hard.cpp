#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,ans;
    cin >> a;
    int A[a];
    for (int i = 0; i < a; i++)
    {
        cin >> A[i];
    }
    sort(A,A+a);
    ans = A[0] + (2 * A[a - 1]);
    cout << ans;
}