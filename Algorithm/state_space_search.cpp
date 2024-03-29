#include <bits/stdc++.h>
using namespace std;

vector <int> bc;
bool mem[1000];

void solve(int m,int n)
{
    if (m == n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << bc[i];
        }
        cout << "\n";
        return;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (mem[i])
            {
                bc.push_back(i);
                mem[i] = 0;
                solve(m+1,n);
                bc.pop_back();
                mem[i] = 1;
            }
            
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    memset(mem,1,sizeof(mem));
    int n;
    cin >> n;
    solve(0,n);
    return 0;
}