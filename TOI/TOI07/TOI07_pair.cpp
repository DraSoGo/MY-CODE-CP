#include <bits/stdc++.h>
using namespace std;

const int sz = 2e5+10;
long long A[sz],tree[2*sz],tree2[2*sz];
long long n,x,y,ans = 0,mxn;

void add(int idx,long long x)
{
    idx += mxn;
    tree[idx] = x;
    for (int i = idx/2; i >= 1; i/=2)
    {
        tree[i] = tree[2*i] + tree[2*i+1];
    }
}
void add2(int idx,long long x)
{
    idx += mxn;
    tree2[idx] = x;
    for (int i = idx/2; i >= 1; i/=2)
    {
        tree2[i] = tree2[2*i] + tree2[2*i+1];
    }
}

long long qury(long long a,long long b)
{
    long long sum = 0;
    a += mxn;
    b += mxn;
    // cout << a << " " << b << " ";
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
    // cout << co << " " << sum << "\n";
    return sum;
}

long long qury2(long long a,long long b)
{
    long long sum = 0;
    a += mxn;
    b += mxn;
    // cout << a << " " << b << " ";
    while (a <= b)
    {
        if (a % 2 == 1)
        {
            sum += tree2[a];
            a++;
        }
        if (b % 2 == 0)
        {
            sum += tree2[b];
            b--;
        }
        a /= 2;
        b /= 2;
    }
    // cout << co << " " << sum << "\n";
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        A[y] = x;
        mxn = max(x,mxn);
    }
    // for (int i = 1; i <= mxn; i++)
    // {
    //     add(i,0);
    // }
    for (int i = 1; i <= n; i++)
    {
        // cout << A[i] << "\n";
        add(A[i],A[i]);
        add2(A[i],1);
        ans += qury(A[i]+1,mxn) + A[i]*qury2(A[i]+1,mxn);
        // for (int j = 1; j <= 2*mxn; j++)
        // {
        //     cout << tree[j] << " ";
        // }
        // cout << "\n";
    }
    cout << ans;
    return 0;
}