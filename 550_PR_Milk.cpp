#include <bits/stdc++.h>
using namespace std;
int ch;
bool vis[1000];
queue <int> q;

void ade(vector <int> G[],int s,int e)
{
    G[s].push_back(e);
    G[e].push_back(s);
}

void BFS(vector <int> G[],int s,int e)
{
    //cout << s << "\n";
    q.push(s);
    vis[s] = true;
    while (!q.empty())
    {
        s = q.front();
        //cout << s << " ";
        q.pop();
        for (int i = 0; i < G[s].size(); i++)
        {
            if (vis[G[s][i]] == false)
            {
                q.push(G[s][i]);
                vis[G[s][i]] = true;
            }
            if (G[s][i] == e)
            {
                ch = 1;
                return;
            }
            
        }
    }
}        

int main()
{
    int m,n,x,y;
    char cm;
    cin >> n >> m;
    vector <int> G[n+1];
    memset(G,0,sizeof(G));
    while (m--)
    {
        memset(vis,false,sizeof(vis));
        cin >> cm >> x >> y;
        // x--;
        // y--;
        if (cm == 'c')
        {
            ade(G,x,y);
        }
        else
        {
            ch = 0;
            //cout << y << "\n";
            BFS(G,x,y);
            //cout << "\n";
            if (ch == 0)
            {
                cout << "no\n";
            }
            else
            {
                cout << "yes\n";
            }
            for (int i = 0; i < q.size(); i++)
            {
                q.pop();
            }
            
        }
        
    }
}