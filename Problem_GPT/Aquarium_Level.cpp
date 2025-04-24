//https://chatgpt.com/canvas/shared/680a6a26253c8191a9bcb1f2f4f455b3
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,ans = 0;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    sort(A,A+n);
    int med = A[((n+1)/2)-1];
    for (int i = 0; i < n; i++)
    {
        ans += abs(med-A[i]);
    }
    cout << ans;
    return 0;
}