#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define f first
#define s second
using namespace std;
ll val[1000005], c = 0, now = 0, ans = 0;
int main()
{
    ll a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        char b;
        cin >> b;
        if (b == 'T')
        {
            c++;
            now += val[c - 1];
            val[c] += val[c - 1];
            if (c == 1)
            {
                now++;
                val[0] = 0;
            }
            else
            {
                val[c - 1] = 1;
                now += c - 1;
            }
        }
        else
        {
            c = 0;
            val[0]++;
        }
        ans += now;
        for (int j = 0; j < a; j++)
        {
            cout << val[j] << " ";
        }
        cout << "\n";
        cout << i << " :" << c << " " << now << " " << ans  << "\n";
    }
    cout << ans;
}