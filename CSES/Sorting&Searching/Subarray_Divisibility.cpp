#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,sum = 0,x,ans = 0;
    cin >> n;
    map <long long,long long> M;
    M[0]++;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum += x;
        M[((sum%n)+n)%n]++;
    }
    for (auto [a,b]:M)
    {
        ans += b*(b-1)/2;
    }
    cout << ans;
    return 0;
}