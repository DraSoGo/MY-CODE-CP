#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int m,n,p,x,u;
    cin >> m >> n;
    int cost[m+1],point[m+1],A[m];
    cost[m] = INT_MAX;
    for (int i = 0; i < m; i++)
    {
        cin >> A[i];
        if (A[i] >= 0)
        {
            if (i == 0)
            {
                point[i] = A[i];
                cost[i] = 0;
            }
            else
            {
                point[i] = A[i] + point[i-1];
                cost[i] = cost[i-1];
            }
        }
        else
        {
            if (i == 0)
            {
                cost[i] = A[i];
                point[i] = 0;
            }
            else
            {
                cost[i] = A[i] + cost[i-1];
                point[i] = point[i-1];
            }
        }
    }
    point[m] = point[m-1];
    for (int i = 0; i < m; i++)
    {
        cost[i] = abs(cost[i]);
        // cout << cost[i] << " ";
    }
    // cout << "\n";
    // for (int i = 0; i < m; i++)
    // {
    //     cout << point[i] << " ";
    // }
    // cout << "\n";
    for (int i = 0; i < n; i++)
    {
        cin >> x >> p;
        if (x != 0)
        {
            p += cost[x-1];
            cout << point[(lower_bound(cost,cost+m,p)-cost)] - point[x-1] << "\n";
        }
        else
        {
            cout << point[(lower_bound(cost,cost+m,p)-cost)] << "\n";
        }
    }
    return 0;   
}