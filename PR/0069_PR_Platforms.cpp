#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,a,b;
    char c;
    cin >> n;
    vector <queue<int>> Q(n);
    for (int i = 0; i < n; i++)
    {
        cin >> c >> a >> b;
        if (c == 'N')
        {
            Q[b-1].push(a);
        }
        else
        {
            while (!Q[a-1].empty())
            {
                Q[b-1].push(Q[a-1].front());
                Q[a-1].pop();
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        while (!Q[i].empty())
        {
            cout << Q[i].front() << "\n";
            Q[i].pop();
        }
        
    }
    
}