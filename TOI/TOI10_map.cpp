#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
struct point
{
    int x,y;
};

struct mp
{
    int a;
    char c;
    int b; 
};

int A[404][404];
point pos[40004];
vector <mp> V;
bool vis[40004];

void fl(int a,char c,int b,int p)
{
    int x1,y1;
    if (p == 0)
    {
        x1 = 200,y1 = 200;
        A[y1][x1] = a;
        pos[a] = {x1,y1};
        if (c == 'U')
        {
            y1--;
        }
        else if (c == 'D')
        {
            y1++;
        }
        else if (c == 'L')
        {
            x1++;
        }
        else if (c == 'R')
        {
            x1--;
        }
        A[y1][x1] = b;
        pos[b] = {x1,y1};
    }
    else if (p == 1)
    {
        x1 = pos[a].x,y1 = pos[a].y;
        if (c == 'U')
        {
            y1--;
        }
        else if (c == 'D')
        {
            y1++;
        }
        else if (c == 'L')
        {
            x1++;
        }
        else if (c == 'R')
        {
            x1--;
        }
        A[y1][x1] = b;
        pos[b] = {x1,y1};
    }
    else if (p == 2)
    {
        x1 = pos[b].x,y1 = pos[b].y;
        if (c == 'U')
        {
            y1++;
        }
        else if (c == 'D')
        {
            y1--;
        }
        else if (c == 'L')
        {
            x1--;
        }
        else if (c == 'R')
        {
            x1++;
        }
        A[y1][x1] = a;
        // cout << "hi " << a << " " << x1 << " " << y1 << "\n";
        pos[a] = {x1,y1};
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    memset(A,-1,sizeof(A));
    int n,m,a,b,co = 1;
    char c;
    cin >> m >> n;
    for (int i = 0; i < 40004; i++)
    {
        pos[i] = {-1,-1};
    }
    for (int i = 0; i < (m*n)-1; i++)
    {
        cin >> a >> c >> b;
        V.push_back({a,c,b});
    }
    mp z = V[0];
    vis[0] = 1;
    fl(z.a,z.c,z.b,0);
    while (co != m*n-1)
    {
        for (int i = 1; i < m*n-1; i++)
        {
            if (vis[i] == 1)
            {
                continue;
            }
            z = V[i];
            // cout << i << " :" << z.a << " " << z.b << " =" << co << "\n";
            
            if (pos[z.a].x != -1 && pos[z.a].y != -1)
            {
                fl(z.a,z.c,z.b,1);
                vis[i] = 1;
                co++;
            }
            else if (pos[z.b].x != -1 && pos[z.b].y != -1)
            {
                fl(z.a,z.c,z.b,2);
                vis[i] = 1;
                co++;
            }
            // if (i == 4)
            // {
            //     break;
            // }
            
        }
    }
    int check = 0,cal = 0;
    for (int i = 403;   i >= 1; i--)
    {
        for (int j = 0; j < 404; j++)
        {
            if (A[i][j] != -1)
            {
                check = 1;
                cout << A[i][j] << " ";
                cal++;
            }
        }
        if (cal == m*n)
        {
            break;
        }
        if (check == 1)
        {
            cout << "\n";
        }
    }
    
    
    return 0;
}