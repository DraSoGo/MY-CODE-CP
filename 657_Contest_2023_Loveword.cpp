#include <bits/stdc++.h>
using namespace std;
long long s[51];

char solve(long long idx,long long n)
{
    //cout << idx << " :" << n << "\n";
    if (idx == 1)
    {
        return 'L';
    }
    else if (idx == 2)
    {
        return 'O';
    }
    else if (idx == 3)
    {
        return 'V';
    }
    else if (idx == 4)
    {
        return 'E';
    }
    long long s1 = s[idx-4],s2 = s[idx-3],s3 = s[idx-2];
    if (n <= s1)
    {
        return solve(idx-4,n);
    }
    else if (n > s1 && n <= s1 + s2)
    {
        return solve(idx-3,n-s1);
    }
    else if (n > s1+s2 && n <= s1 + s2 + s3)
    {
        return solve(idx-2,n-s1-s2);
    }
    else
    {
        //cout << idx-1 << " " << n-s1-s2-s3 << "\n";
        return solve(idx-1,n-s1-s2-s3);
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long t,m,n;
    s[1] = 1;
    s[2] = 1;
    s[3] = 1;
    s[4] = 1;
    for (long long i = 5; i < 51; i++)
    {
        s[i] = s[i-1]+s[i-2]+s[i-3]+s[i-4];
        //cout << s[i] << "\n";
    }
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        //cout << s[n] << "\n";
        cout << solve(n,m) << "\n";
    }
    
    return 0;
}