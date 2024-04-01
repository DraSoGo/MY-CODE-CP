#include <bits/stdc++.h>
using namespace std;

int n;
int tree[1000];

int sum(int k)
{
    int s = 0;
    while (k >= 1)
    {
        s += tree[k];
        k -= k&-k;
    }
    return s;
}

void add(int k,int x)
{
    while (k <= n)
    {
        tree[k] += x;
        k += k&-k;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie();cout.tie(0);
    int x,a,b;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        add(i,x);
    }
    cin >> a >> b;
    cout << sum(b)-sum(a); 
    return 0;
}