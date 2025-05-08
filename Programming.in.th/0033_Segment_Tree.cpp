#include <bits/stdc++.h>
using namespace std;

const int sz = 3e5;
long long n,q;
long long tree[2*sz];

void add(long long idx,long long x)
{
    idx += n;
    tree[idx] = x;
    for (int i = idx/2; i >= 1; i/=2)
    {
        tree[i] = max(tree[2*i],tree[2*i+1]);
    }
}

long long qury(long long a,long long b)
{
    long long ans = INT_MIN;
    a += n;
    b += n;
    while (a <= b)
    {
        if(a%2 == 1)
        {
            ans = max(ans,tree[a]);
            a++;
        }
        if(b%2 == 0)
        {
            ans = max(ans,tree[b]);
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
    for (int i = 1; i <= n; i++)
    {
        add(i,0);
    }
    
    while (q--)
    {
        char c;
        long long a,b;
        cin >> c >> a >> b;
        if (c == 'U')
        {
            add(a,b);
        }
        else
        {
            cout << qury(a,b) << "\n";
        }
        
        
    }
    return 0;
}