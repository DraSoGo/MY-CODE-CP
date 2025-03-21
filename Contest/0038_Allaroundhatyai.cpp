#include <bits/stdc++.h>
using namespace std;

vector <int> V;
bool vis[11];
int mx = -1;

template <size_t A, size_t B>
void SSS(int (&T)[A][B],int n)
{
    if (V.size() == n)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += T[V[i]][i];
            // cout << V[i] << " ";
            // if (V[i] == n-1)
            // {
            //     break;
            // }
        }
        mx = max(sum,mx);
        // cout << "\n";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                V.push_back(i);
                vis[i] = 1;
                SSS(T,n);
                V.pop_back();
                vis[i] = 0;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int T[11][11];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> T[i][j];
        }
    }
    SSS(T,n);
    cout << mx;
    return 0;
}