#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    queue <int> Q[100001];
    int n,k,x,y;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        if (k == 1)
        {
            cin >> x >> y;
            Q[y].push(x);
        }
        else if (k == 2)
        {
            cin >> y;
            if (!Q[y].empty())
            {
                Q[y].pop();
            }
        }
        else if (k == 3)
        {
            cin >> y;
            if (!Q[y].empty())
            {
                cout << Q[y].front();
            }
            else
            {
                cout << -1;
            }
            cout << "\n";
        }
        else
        {
            cin >> y;
            if(!Q[y].empty())
            {
                cout << Q[y].size() << "\n";
            }else cout << 0 << '\n';

        }
        
    }
    
}