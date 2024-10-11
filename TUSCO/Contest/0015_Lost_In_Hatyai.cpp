#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1000;
int n, m, q;
char grid[MAXN][MAXN];
bool visited[MAXN][MAXN];
pair<int, int> start_pos, end_pos;
bool isValid(int r, int c)
{
    return r >= 1 && r <= n && c >= 1 && c <= m && grid[r][c] == '.';
}
bool bfs() 
{
    queue<pair<int, int>> q;
    q.push(start_pos);
    visited[start_pos.first][start_pos.second] = true;
    while (!q.empty()) 
    {
        pair<int, int> cur_pos = q.front();
        q.pop();
        if (cur_pos == end_pos) 
        {
            return true;
        }
        int r = cur_pos.first, c = cur_pos.second;
        if (isValid(r+1, c) && !visited[r+1][c]) 
        {
            visited[r+1][c] = true;
            q.push(make_pair(r+1, c));
        }
        if (isValid(r-1, c) && !visited[r-1][c]) 
        {
            visited[r-1][c] = true;
            q.push(make_pair(r-1, c));
        }
        if (isValid(r, c+1) && !visited[r][c+1]) 
        {
            visited[r][c+1] = true;
            q.push(make_pair(r, c+1));
        }
        if (isValid(r, c-1) && !visited[r][c-1]) 
        {
            visited[r][c-1] = true;
            q.push(make_pair(r, c-1));
        }
    }
    return false;
}
int main() {
    cin >> n >> m >> q;
    for (int r = 1; r <= n; r++) 
    {
        for (int c = 1; c <= m; c++) 
        {
            cin >> grid[r][c];
        }
    }
    while (q--) 
    {
        memset(visited, false, sizeof(visited));
        int sr, sc, er, ec;
        cin >> sr >> sc >> er >> ec;
        start_pos = make_pair(sr, sc);
        end_pos = make_pair(er, ec);
        cout << (bfs() ? "YES" : "NO") << '\n';
    }
    return 0;
}
