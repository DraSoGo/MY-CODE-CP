#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie();
    set <int> S;
    int t,a,n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        while (n--)
        {
            cin >> a;
            S.insert(a);
            cin >> a;
            S.insert(a);
        }
        cout << S.size() << "\n";
        S.clear();
    }
    return 0;
}