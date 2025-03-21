#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
queue <int> Q[N];

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,x,y;
    char c;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        if (c == '1')
        {
            cin >> x >> y;
            Q[y].push(x);
        }
        else if (c == '2')
        {
            cin >> y;
            if (!Q[y].empty())
            {
                Q[y].pop();
            }
        }
        else if (c == '3')
        {
            cin >> y;
            !Q[y].empty()?cout << Q[y].front():cout << "-1";
            cout << "\n";
        }
        else
        {
            cin >> y;
            cout << Q[y].size() << "\n";
        }
        
        
    }
    return 0;
}