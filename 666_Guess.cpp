#include <bits/stdc++.h>
using namespace std;

vector <int> V;
vector <int> S[10000];
int co = 0;
bool vis[1000];
int A[100][100];
int B[100][100];
int C[100],E[100];

bool check(int l)
{
    int er,cr;
    for (int k = 0; k < l; k++)
    {
        cr = 0;
        er = 0;
        for (int i = 0; i < V.size(); i++)
        {
            if (V[i] == A[k][i])
            {
                cr++;
            }
            else if (vis[A[k][i]])
            {
                er++;
            }
            // if (cr > A[k][V.size()] || er > A[k][V.size()+1])
            // {
            //     return false;
            // }
        }
        if (cr != C[k] || er != E[k])
        {
            return false;
        }
    }
    return true;
}

void solve(int m,int n,int l)
{
    if (m == n)
    {
        if (check(l) == true)
        {
            for (int i = 0; i < m; i++)
            {
                //S[co].push_back(V[i]);
                cout << V[i] << " ";
            }
            cout << "\n";
            co++;
        }
    }
    else
    {
        for (int i = 1; i <= 9; i++)
        {
            if (vis[i] == 0)
            {
                V.push_back(i);
                vis[i] = 1;
                solve(m+1,n,l);
                vis[i] = 0;
                V.pop_back();
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    memset(vis,0,sizeof(vis));
    memset(B,0,sizeof(B));
    int n,m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
            if (j < n)
            {
                B[i][A[i][j]]++;
            }
        }
        cin >> C[i] >> E[i];
    }
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 1; j <= 9; j++)
    //     {
    //         cout << B[i][j] <<" ";
    //     }
    //     cout << "\n";
    // }
    
    solve(0,n,m);
    // sort(S,S+10000);
    // for (int i = 0; i < 10000; i++)
    // {
    //     if (!S[i].empty())
    //     {
    //         for (int j = 0; j < S[i].size(); j++)
    //         {
    //             cout << S[i][j] << " ";
    //         }
    //         cout << "\n";
    //     }
    // }
    
    cout << co;
    return 0;
}