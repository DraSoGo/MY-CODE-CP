#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie();cout.tie(0);
    int n, w;
    cin >> n >> w;
    vector<int> wes(n);
    for (int i = 0; i < n; i++)
    {
        cin >> wes[i];
    }
    sort(wes.begin(), wes.end());
    int ans = 0;
    int cw = 0;
    for (int we : wes)
    {
        if (cw + we > w)
        {
            ans++;
            cw = 0;
        }
        cw += we;
    }
    cout << ans << "\n";
    return 0;
}