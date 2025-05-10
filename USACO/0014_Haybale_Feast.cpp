#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ifstream fin("hayfeast.in");
    ofstream fout("hayfeast.out");
    long long n,k,sum = 0,ans = INT_MAX;
    cin >> n >> k;
    pair <long long,long long> A[n];
    multiset <long long> MS;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i].first >> A[i].second;
    }
    int l = 0;
    for (int r = 0; r < n; r++)
    {
        sum += A[r].first;
        MS.insert(A[r].second);
        while (sum - A[l].first >= k)
        {
            sum -= A[l].first;
            auto it = MS.find(A[l].second);
            MS.erase(it);
            l++;
        }
        if (sum >= k)
        {
            auto idx = MS.end();
            idx--;
            ans = min(ans,*idx);
        }
    }
    cout << ans;
    return 0;
}