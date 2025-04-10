#include <bits/stdc++.h>
using namespace std;

const int sz = 1e3+1;
int m,n,MANS[sz][sz],ANS[sz][sz],co;
pair<int,int> st,par[sz][sz];
char T[sz][sz];
vector <pair<int,int>> M;
bool vis[sz][sz];
queue <pair<int,int>> Q;
int di[4] = {0,0,-1,1};
int dj[4] = {1,-1,0,0};

void BFS(int i,int j)
{
    Q.push({i,j});
    vis[i][j] = 1;
    int lvq = 0;
    while (!Q.empty())
    {
        int sq = Q.size();
        while (sq--)
        {
            auto [ii,jj] = Q.front();
            Q.pop();
            ANS[ii][jj] = min(ANS[ii][jj],lvq);
            for (int k = 0; k < 4; k++)
            {
                int ni = ii + di[k];
                int nj = jj + dj[k];
                if (!(ni < 0 || nj < 0 || ni >= n || nj >= m || T[ni][nj] == '#' || vis[ni][nj]))
                {
                    vis[ni][nj] = 1;
                    par[ni][nj] = {ii,jj};
                    Q.push({ni,nj});
                }
            }
        }
        lvq++;
    }
    
}

void MBFS()
{
    int lvq = 0;
    while (!Q.empty())
    {
        int sq = Q.size();
        while (sq--)
        {
            auto [ii,jj] = Q.front();
            Q.pop();
            if (vis[ii][jj])
            {
                continue;
            }
            MANS[ii][jj] = min(MANS[ii][jj],lvq);
            vis[ii][jj] = 1;
            for (int k = 0; k < 4; k++)
            {
                int ni = ii + di[k];
                int nj = jj + dj[k];
                if (!(ni < 0 || nj < 0 || ni >= n || nj >= m || T[ni][nj] == '#'))
                {
                    Q.push({ni,nj});
                }
            }
            co++;
        }
        lvq++;
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> T[i][j];
            MANS[i][j] = INT_MAX;
            ANS[i][j] = INT_MAX;
            par[i][j] = {i,j};
            if (T[i][j] == 'A')
            {
                st = {i,j};
            }
            else if (T[i][j] == 'M')
            {
                M.push_back({i,j});
            }
        }
    }
    for(auto [i,j]:M)
    {
        Q.push({i,j});
    }
    MBFS();
    memset(vis,0,sizeof(vis));
    BFS(st.first,st.second);
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << (MANS[i][j] == INT_MAX?-1:MANS[i][j]) << " ";
    //     }
    //     cout << "\n";
    // }
    // cout << "\n";
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << (ANS[i][j] == INT_MAX?-1:ANS[i][j]) << " ";
    //     }
    //     cout << "\n";
    // }
    // cout << "\n";
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << par[i][j].first << "," << par[i][j].second << " ";
    //     }
    //     cout << "\n";
    // }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((i == 0 || j == 0 || i == n-1 || j == m-1) && ANS[i][j] < MANS[i][j])
            {
                cout << "YES\n" << ANS[i][j] << "\n";
                vector <pair<int,int>> path;
                int tmpi = i,tmpj = j;
                
                while (!(par[tmpi][tmpj].first == tmpi && par[tmpi][tmpj].second == tmpj))
                {
                    path.push_back({tmpi,tmpj});
                    int tmp = tmpi;
                    tmpi = par[tmpi][tmpj].first;
                    tmpj = par[tmp][tmpj].second;
                }
                path.push_back({tmpi,tmpj});
                reverse(path.begin(),path.end());
                for (int k = 0; k < path.size()-1; k++)
                {
                    int di = path[k].first - path[k+1].first;
                    int dj = path[k].second - path[k+1].second;
                    if (di == 1 && dj == 0)
                    {
                        cout << "U";
                    }
                    else if (di == -1 && dj == 0)
                    {
                        cout << "D";
                    }
                    else if (di == 0 && dj == 1)
                    {
                        cout << "L";
                    }
                    else
                    {
                        cout << "R";
                    }
                    
                }
                // cout << "\n" << co;
                return 0;
            }
        }
    }
    cout << "NO";
    // cout << "\n" << co;
    return 0;
}