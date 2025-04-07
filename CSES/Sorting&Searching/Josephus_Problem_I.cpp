#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    set <int> S;
    for (int i = 1; i <= n; i++)
    {
        S.insert(i);
    }
    auto idx = S.begin();
    idx++;
    while (!S.empty())
    {
        if (idx == S.end())
        {
            idx = S.begin();
        }
        cout << *idx << " ";
        idx = S.erase(idx);
        // idx++;
        if (S.empty())
        {
            break;
        }
        if (idx == S.end())
        {
            idx = S.begin();
        }
        idx++;
    }
    return 0;
}