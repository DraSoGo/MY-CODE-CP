#include <bits/stdc++.h>
using namespace std;

const int sz = 2e5+10;
int n,q;
long long tree[2*sz];

void add(int idx,int x)
{
    idx += n;
    tree[idx] = x;
    for (int i = idx/2; i >= 1; i/=2)
    {
        tree[i] = min(tree[2*i],tree[2*i+1]);
    }
}

int qury(int a,int b)
{
    long long ans = INT_MAX;
    a += n;
    b += n;
    while (a <= b)
    {
        if (a % 2 == 1)
        {
            ans = min(ans,tree[a]);
            a++;
        }
        if (b % 2 == 0)
        {
            ans = min(ans,tree[b]);
            b--;
        }
        a /= 2;
        b /= 2;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> q;
    long long x;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        add(i,x);
    }
    while (q--)
    {
        long long c,a,b;
        cin >> c >> a >> b;
        if (c == 2)
        {
            cout << qury(a,b) << "\n";
        }
        else
        {
            add(a,b);
        }
    }
    
    return 0;
}