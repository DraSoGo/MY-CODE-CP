#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m;
    cin >> n >> m;
    int A[n+1],up[n],down[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    A[n] = 0;
    int idx = 0,num = A[0];
    for (int i = 1; i <= n; i++)
    {
        if (A[i] < num || i == n)
        {
            // num = A[i];
            for (int j = idx; j < i; j++)
            {
                up[j] = i;
            }
            idx = i;
        }
        num = A[i];
    }
    idx = 0,num = A[0];
    for (int i = 1; i <= n; i++)
    {
        if (A[i] > num || i == n)
        {
            // num = A[i];
            for (int j = idx; j < i; j++)
            {
                down[j] = i;
            }
            idx = i;
        }
        num = A[i];
    }
    for (int i = 0; i < n; i++)
    {
        up[i]--;
        down[i]--;
    }
    while (m--)
    {
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        cout << (up[a] >= b || down[a] >= b || (down[up[a]] >= b)?"Yes\n":"No\n");
    }
    
    return 0;
}