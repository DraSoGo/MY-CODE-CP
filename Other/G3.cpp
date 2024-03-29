#include <bits/stdc++.h>
using namespace std;
const long long l = 2e5;
struct GP
{
    long long node;
    long long pos;
};

long long co = 0,chk,sum;
bool vis[l+1];
bool A[l+1];
stack <GP> S;

// bool check(long long st,vector <long long> V[])
// {
//     return !vis[st];
// }

void ade(long long u,long long v,vector <long long> V[])
{
    V[u].push_back(v);
    V[v].push_back(u);
}

void dfs(int u,int p,vector <long long> V[])
{
    for(auto v:V[u])
    {
        if (v == p)
        {
            continue;
        }
        dfs(v,u,V);
        if (A[v])
        {
            A[u] = true;
        }
        
    }
}

// void DFS(long long st,vector <long long> V[])
// {
//     long long st1,pt1;
//     S.push({st,1});
//     vis[st] = 1;
//     while (!S.empty())
//     {
//         chk = pt1;
//         st1 = S.top().node;
//         pt1 = S.top().pos;
//         cout << st1 << "\n";
//         if (chk >= pt1)
//         {
//             co = 0;
//         }
//         if (A[st1] == 1)
//         {
//             //cout << 1 << "\n";
//             sum += co;
//             co = 0;
//         }
//         if(A[st1] == 0)
//         {
//             co++;
//         }
        
//         //pt1++;
//         S.pop();
//         //cout << st1 << "\n";
//         for (long long i = 0; i < V[st1].size(); i++)
//         {
//             long long st2 = V[st1][i];
//             if (check(st2,V))
//             {
//                 S.push({st2,pt1+1});
//                 vis[st2] = true;
//             }
//         }
//     }
// }

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie();
    long long k,n,u,v,x;
    cin >> n >> k;
    vector <long long> V[n+1];
    memset(A,0,sizeof(A));
    memset(vis,0,sizeof(vis));
    for (long long i = 0; i < n-1; i++)
    {
        cin >> u >> v;
        ade(u,v,V);
    }
    for (long long i = 0; i < k; i++)
    {
        cin >> x;
        A[x] = 1;
    }
    dfs(x,0,V);
    for (int i = 1; i <= n; i++)
    {
        sum += A[i];
    }
    //DFS(1,V);
    cout << sum;
    return 0;
}