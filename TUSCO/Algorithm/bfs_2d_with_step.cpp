#include<bits/stdc++.h>
using namespace std;
int graph[100][100];
bool visited[100][100];
int M,N;
bool is_valid(int x,int y)
{
    if(x <0 || y<0 || x>=M || y>=N)
        return false;
    if(visited[x][y]==true)
        return false;
    else
        return true;
}
void BFS(int x, int y)
{
    queue<pair<int,int>> Q;
    Q.push({x,y});
    visited[x][y] =true;
    int step=0;
    while(!Q.empty())
    {
        int lv_size = Q.size();
        step++;
        cout<<"\nLevel: "<<step<<endl;
        while(lv_size--)
        {
            int curr_x = Q.front().first;
            int curr_y = Q.front().second;
            Q.pop();
            cout << graph[curr_x][curr_y]<<" ";
            int dx[] ={-1,1,0,0};
            int dy[] ={0,0,-1,1};
            for(int i=0;i<4;i++)
            {
                if(is_valid(curr_x+dx[i],curr_y+dy[i]))
                {
                    Q.push({curr_x+dx[i],curr_y+dy[i]});
                    visited[curr_x+dx[i]][curr_y+dy[i]] = true;
                }
            }
        }
    }
}
main()
{
    memset(visited,0,sizeof(0));
    cin >> M>>N;
    for(int i =0;i <M;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin >> graph[i][j];
        }
    }
    BFS(0,0);
}
