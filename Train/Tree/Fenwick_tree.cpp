#include <bits/stdc++.h>
using namespace std;

int tree[1000],A[1000];
int n;

void add(int k,int x)
{
    while (k <= n)
    {
        tree[k] += x;
        k += k&-k;
    }
}

int sum(int k)
{
    int s = 0;
    while (k > 0)
    {
        s += tree[k];
        k -= k&-k;
    }
    return s;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie();cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
        add(i,A[i]);
    }
    int a,b,x,y;
    cin >> a >> b >> x >> y;
    cout << sum(b)-sum(a-1) << "\n";
    add(x,y);
    cout << sum(b)-sum(a-1);
    return 0;
}
/*
INPUT
5
1 2 3 4 5
2 4
2 5
OUTPUT
9
14
*/