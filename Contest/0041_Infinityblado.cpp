#include <bits/stdc++.h>
using namespace std;

map <string,long long> MP;

bool cmd(long long a,long long b)
{
    return a > b;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,m,x;
    string a;
    cin >> n >> m;
    long long mx[n],mn[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> x;
        mn[i] = x;
        mx[i] = x;
    }
    sort(mn,mn+n);
    sort(mx,mx+n,cmd);
    // cout << mx[0];
    for (long long i = 0; i < m; i++)
    {
        cin >> a;
        MP[a]++;
        // cout << MP[a] << " ";
    }
    long long A[MP.size()];
    long long i = 0;
    for (auto x:MP)
    {
        A[i] = x.second;
        i++;
    }
    sort(A,A+MP.size(),cmd);
    long long summn = 0;
    long long summx = 0;
    for (long long i = 0; i < MP.size(); i++)
    {
        // cout << mn[i] << " " << mx[i] << " " << A[i] << "\n";
        // cout << mn[i] << "\n";
        summn += A[i] * mn[i];
        summx += A[i] * mx[i];
    }
    cout << summn << " " << summx;
    return 0;
}