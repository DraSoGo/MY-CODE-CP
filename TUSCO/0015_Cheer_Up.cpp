#include <bits/stdc++.h>
using namespace std;

const long long sz = 3e6;
bool P[sz];

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,k;
    P[1] = 1;
    for (long long i = 2; i < sz; i++)
    {
        if (P[i] == 0)
        {
            for (long long j = i*i; j < sz; j+=i)
            {
                P[j] = 1;
            }
        }
    }
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        cin >> k;
        long long x = 1,y = k;
        if (ceil(sqrt(k)) == floor(sqrt(k)))
        {
            x = ceil(sqrt(k));
        }
        if (P[y] == 0 || P[x] == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    
    return 0;
}