#include <bits/stdc++.h>
using namespace std;

const int sz = 2e5+10;
long long tree[2*sz];
int n,q;

void add(int idx,int x)
{
    idx += n;
    tree[idx] = x;
    for (int i = idx/2; i >= 1; i/=2)
    {
        tree[i] = tree[i*2]+tree[i*2+1];
    }
}

long long qury(int a,int b)
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
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int x,c,a,b;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        add(i,x);
    }
    while (q--)
    {
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
/*
INPUT
8 4
3 2 4 5 1 1 5 3
2 1 4
2 5 6
1 3 1
2 1 4
OUTPUT
14
2
11
*/