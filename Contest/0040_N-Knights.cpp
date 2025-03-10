#include <bits/stdc++.h>
using namespace std;
int n;
int T[11][11];
bool mem[11];
int mx = -1;

vector <int> V;

bool check()
{
    for (int i = 0; i < V.size(); i++)
    {
        if (i-1 >= 0 && abs(V[i]-V[i-1]) == 2)
        {
            return 0;
        }
        else if (i-2 >= 0 && abs(V[i]-V[i-2]) == 1)
        {
            return 0;
        }
        else if (i+1 < V.size() && abs(V[i]-V[i+1]) == 2)
        {
            return 0;
        }
        else if (i+2 < V.size() && abs(V[i]-V[i+2]) == 1)
        {
            return 0;
        }
    }
    return 1;
}

void gen(int x)
{
    if (x == n)
    {
        if (check())
        {
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                // cout << V[i];
                sum += T[i][V[i]-1];
            }
            mx = max(mx,sum);
            // cout << "\n";
        }
        return;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (!mem[i])
            {
                V.push_back(i);
                mem[i] = 1;
                gen(x+1);
                V.pop_back();
                mem[i] = 0;
            }
        }
    }
    
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> T[i][j];
        }
    }
    gen(0);
    cout << mx;
    return 0;
}