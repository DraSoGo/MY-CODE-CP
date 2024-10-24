#include <bits/stdc++.h>
using namespace std;

const long long n = 1e5+1;
bool P[n];
vector <long long> V;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    P[0] = P[1] = 1;
    for (long long i = 2; i < n; i++)
    {
        if (P[i] == 0)
        {
            V.emplace_back(i);
            for (long long j = i*i; j < n; j+=i)
            {
                P[j] = 1;
            }
        }
    }
    long long t,q;
    cin >> t;
    while (t--)
    {
        cin >> q;
        long long a,b,ch = 0;
        while (ch == 0)
        {
            for (long long i = 0; V[i] <= q/2+1; i++)
            {
                if (ceil(double(q)/double(V[i])) == floor(double(q)/double(V[i])) && P[q/V[i]] == 0 && q/V[i] != V[i] && V[i] * q/V[i] == q)
                {
                    // cout << q/V[i] << " " << V[i] << " " << q << "\n";
                    cout << q << "\n";
                    ch = 1;
                    break;
                }
            }
            q++;
            // cout << q << " ";
        }
    }
    return 0;
}