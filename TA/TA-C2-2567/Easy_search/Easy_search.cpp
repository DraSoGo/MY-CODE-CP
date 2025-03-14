#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,x;
    vector <int> V;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        V.push_back(x);
    }
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (V[i] == x)
        {
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
