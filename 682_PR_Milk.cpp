#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio();cin.tie();cout.tie();
    char cm;
    long long n,q,u,v,a,b;
    cin >> n >> q;
    vector <long long> V[n+1];
    queue <long long> Q;
    bool vis[n+1],ch;
    for (long long i = 0; i < q; i++)
    {
        cin >> cm >> u >> v;
        if (cm == 'c')
        {
            V[u].push_back(v);
            V[v].push_back(u);
        }
        else
        {
            memset(vis,0,sizeof(vis));
            ch = 0;
            Q.push(u);
            vis[u] = 1;
            // for (long long k = 0; k < n; k++)
            // {
            //     for (long long j = 0; j < V[k].size(); j++)
            //     {
            //         cout << V[k][j] << " ";
            //     }
            //     cout << "-\n";
                
            // }
            
            while (!Q.empty())
            {
                a = Q.front();
                //cout << a << " ";
                Q.pop();
                for (long long i = 0; i < V[a].size(); i++)
                {
                    if (vis[V[a][i]] == false)
                    {
                        if (V[a][i] == v)
                        {
                            ch = 1;
                            break;
                        }
                        Q.push(V[a][i]);
                        vis[V[a][i]] = true;
                    }
                }
                if (ch)
                {
                    break;
                }
            }
            // cout << "\n";
            if (ch == 1)
            {
                cout << "yes\n";
            }
            else
            {
                cout << "no\n";
            }
            
        }
        
    }
    
    return 0;
}