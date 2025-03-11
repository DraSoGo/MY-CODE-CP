#include <bits/stdc++.h>
using namespace std;

int P[101];
int A[11];
int n,m,ans = INT_MAX;
vector <int> V;

void gen(int sz,int sum)
{
    if (V.size() == sz)
    {
        if (sum == m)
        {
            int a = 0;
            for (int i = 0; i < sz; i++)
            {
                a += (V[i]-A[i])*(V[i]-A[i]);
            }
            ans = min(ans,a);
        }
        return ;
    }
    for (int i = 1; i < 101; i++)
    {
        V.push_back(i);
        if (sum + P[i] <= m)
        {
            gen(sz,sum + P[i]);
        }
        V.pop_back();
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < 101; i++)
    {
        P[i] = i*i;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    gen(n,0);
    ans == INT_MAX?cout << -1:cout << ans;
    return 0;
}