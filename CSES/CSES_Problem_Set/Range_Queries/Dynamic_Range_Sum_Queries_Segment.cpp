#include <bits/stdc++.h>
using namespace std;

const int sz = 2e5+10;
long long tree[2*sz];
long long n,q,x;

void add(long long a,long long b)
{
    a = a+n;
    tree[a] = b;
    for (int i = a/2; i >= 1; i /= 2)
    {
        tree[i] = tree[2*i] + tree[2*i+1];
    }
}

long long qury(long long a,long long b)
{
    long long sum = 0;
    a += n;
    b += n;
    while (a <= b)
    {
        if (a % 2 == 1)
        {
            sum += tree[a];
            a++;
        }
        if (b % 2 == 0)
        {
            sum += tree[b];
            b--;
        }
        a /= 2;
        b /= 2;
    }
    return sum;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> q;
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