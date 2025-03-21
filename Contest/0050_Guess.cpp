#include <bits/stdc++.h>
using namespace std;

const int sz = 20;

int n,m,co;
int T[sz][sz],vis[sz],visn[sz];
vector <int> V;

void SSS()
{
    if (V.size() == m)
    {
        // for (int i = 0; i < m; i++)
        // {
        //     cout << V[i] << " ";
        // }
        // cout << "\n";
        bool ch = 1;
        for (int i = 0; i < n; i++)
        {
            int cop = 0,con = 0;
            memset(visn,0,sizeof(visn));
            for (int j = 0; j < m; j++)
            {
                visn[T[i][j]]++;
            }
            for (int j = 0; j < m; j++)
            {
                if (T[i][j] == V[j])
                {
                    cop++;
                }
                else if (visn[V[j]])
                {
                    // visn[V[j]] = 0; 
                    con+=visn[V[j]];
                }
            }
            if (cop != T[i][m] || con != T[i][m+1])
            {
                // cout << cop << " " << con << "\n";
                // ch = 0;
                return;
            }
            // cout << cop << " " << con << "\n";
        }
        // cout << "\n";
        if (ch)
        {
            for (int i = 0; i < m; i++)
            {
                cout << V[i] << " ";
            }
            cout << "\n";
            co++;
        }
        return;
    }
    else
    {
        for (int i = 1; i < 10; i++)
        {
            if (!vis[i])
            {
                vis[i] = 1;
                V.push_back(i);
                SSS();
                vis[i] = 0;
                V.pop_back();
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> m >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m+2; j++)
        {
            cin >> T[i][j];
        }
    }
    SSS();
    cout << co;
    return 0;
}