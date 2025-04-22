#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,x;
    cin >> n;
    stack <pair<int,int>> S;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        while (!S.empty() && S.top().first >= x)
        {
            S.pop();
        }
        if (S.empty())
        {
            cout << 0 << " ";
        }
        else
        {
            cout << S.top().second+1 << " ";
        }
        S.push({x,i});
    }
    return 0;
}