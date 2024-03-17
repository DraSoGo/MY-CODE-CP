#include <bits/stdc++.h>
using namespace std;

int vis[1000];

void ade(vector <int> A[],int u,int v)
{
    A[u].push_back(v);
}

void DFS2(vector <int> A[],int s)
{
    vis[s] = 1;
    // if (vis[s] == 1)
    // {
    //     cout << s << " ";
    // }
    for (int i = 0; i < A[s].size(); i++)
    {
        if (vis[A[s][i]] == 0)
        {
            DFS2(A,A[s][i]);
        }
    }
}

void DFS1(vector <int> A[],int n,int s)
{
    memset(vis,0,sizeof(vis));
    DFS2(A,s);
}

int main()
{
    int n,u,v,e,s;
    cin >> n >> e;
    int X[n];
    vector <int> A[n];
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v;
        ade(A,u,v);
    }
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        DFS1(A,n,i);
        //cout << "\n";
        if (i != 0)
        {
            cout << " ";
        }
        cout << "[ ";
        for (int j = 0; j < n; j++)
        {
            cout << vis[j];
            if (j != n-1)
            {
                cout << " ";
            }
        }
        cout << " ]";
        if (i != n-1)
        {
            cout << "\n";
        }
    }
    cout << "]";
    
}