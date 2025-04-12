#include <bits/stdc++.h>
using namespace std;

const int sz = 2e5+1;
long long T[sz],A[sz];
long long n,q;

void add(long long k,long long x)
{
    while (k <= n)
    {
        T[k] += x;
        k += k&-k;
    }
}

long long sum(long long k)
{
    long long s = 0;
    while (k > 0)
    {
        s += T[k];
        k -= k&-k;
    }
    return s;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
        add(i,A[i]);
    }
    while (q--)
    {
        int id,a,b;
        cin >> id >> a >> b;
        if (id == 1)
        {
            add(a,-1*(A[a]));
            add(a,b);
            A[a] = b;
        }
        else
        {
            cout << sum(b) - sum(a-1) << "\n";
        }
    }
    return 0;
}