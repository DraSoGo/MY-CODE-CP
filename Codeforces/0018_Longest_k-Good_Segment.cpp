#include <bits/stdc++.h>
using namespace std;

const int sz = 1e6+10;
int num[sz];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k,ans = -1,ansl,ansr;
    cin >> n >> k;
    int A[n];
    set <int> S;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int l = 0,r = 0;
    while (r < n)
    {
        num[A[r]]++;
        S.insert(A[r]);
        while (S.size() > k)
        {
            num[A[l]]--;
            if (num[A[l]] == 0)
            {
                S.erase(A[l]);
            }
            l++;
        }
        if (ans < r-l)
        {
            ans = r-l;
            ansr = r;
            ansl = l;
        }
        r++;
    }
    cout << ansl+1 << " " << ansr+1;
    return 0;
}