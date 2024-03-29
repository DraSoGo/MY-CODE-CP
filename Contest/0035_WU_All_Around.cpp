#include <bits/stdc++.h>
using namespace std;

int mx = 0;
vector <int> V;
bool check[11];
int A[11][11];

void solve(int m,int n)
{
    if (m == n)
    {
        int sum = 0;
        for (int i = 0; i < V.size(); i++)
        {
            sum += A[V[i]-1][i];
        }
        mx = max(sum,mx);
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (check[i] == false)
            {
                V.push_back(i);
                check[i] = true;
                solve(m+1,n);
                check[i] = false;
                V.pop_back();
            }
        }
    }
}

int main()
{
    memset(check,0,sizeof(0));
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }
    solve(0,n);
    cout << mx;
}