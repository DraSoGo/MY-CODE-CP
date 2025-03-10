#include <bits/stdc++.h>
using namespace std;
const int md = 1e9+7;
map <set <string>,long long> MP;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,t;
    string x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        set <string> S;
        for (int j = 0; j < t; j++)
        {
            cin >> x;
            S.insert(x);
        }
        MP[S]++;
    }
    int sum = 1;
    for(auto u:MP)
    {
        // cout << u.first << " " << u.second << "\n";
        sum = (sum%md * u.second%md)%md;
    }
    cout << sum;
    return 0;
}