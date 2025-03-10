#include <bits/stdc++.h>
using namespace std;

struct tfc
{
    int x,c;
    bool operator < (const tfc & a)const
    {
        return x > a.x;
    }
    bool operator > (const tfc & a)const
    {
        return x < a.x;
    }
};

bool vis[1500000];

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a,b,x,p,c = 0;
    cin >> a >> b;
    // priority_queue <mtfc> PQmx;
    priority_queue <tfc,vector <tfc>,greater<tfc>> PQmx;
    priority_queue <tfc> PQmn;
    for (int i = 0; i < a; i++)
    {
        cin >> x;
        PQmn.push({x,c});
        PQmx.push({x,c});
        c++;
    }
    for (int i = 0; i < b; i++)
    {
        cin >> p;
        if(p == 1)
        {
            cin >> x ;
            PQmn.push({x,c});
            PQmx.push({x,c});
            c++;
        }
        else
        {
            cin >> x;
            while (x == 1 && vis[PQmn.top().c])
            {
                PQmn.pop();
            }
            while (x == 2 && vis[PQmx.top().c])
            {
                PQmx.pop();
            }
            if (x == 1)
            {
                cout << PQmn.top().x << "\n";
                vis[PQmn.top().c] = 1;
                PQmn.pop();
            }
            else
            {
                cout << PQmx.top().x << "\n";
                vis[PQmx.top().c] = 1;
                PQmx.pop();
            }
            
        }
        
    }
    
    return 0;
}