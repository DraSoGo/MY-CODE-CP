#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long a,b,c,id,ans = 1;
        cin >> a >> b >> c;
        long long A[21],idx[21];
        A[0] = 1;
        A[1] = a;
        idx[0] = 0;
        idx[1] = 1;
        for (int i = 2; i < 21; i++)
        {
            A[i] = (A[i-1]%c * A[i-1]%c)%c;
            idx[i] = idx[i-1] * 2;
        }
        while (b > 0)
        {
            id = lower_bound(idx,idx+21,b)-idx;
            if(idx[id] > b)
            {
                id--;
            }
            // cout << idx[id] << " ";
            ans = (A[id]%c * ans%c)%c;
            b -= idx[id];
        }
        // cout << "____\n";
        cout << ans << "\n";
    }
    
    return 0;
}
