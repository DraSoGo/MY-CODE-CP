#include <bits/stdc++.h>
using namespace std;
const long long k = 1e6;
bitset <k> bs;
vector <long long> P;
int mem[k];

long long cal(long long n)
{
    long long sum = 0;
    for(auto i:P)
    {
        while (n % i == 0)
        {
            n /= i;
            sum += 1;
        }
        if (n == 1)
        {
            return sum;
        }
    }
    return 0;
}

int main()
{
    memset(mem,0,sizeof(mem));
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    P.push_back(2);
    for (long long i = 3; i < k; i+=2)
    {
        if (bs[i] == 0)
        {
            P.push_back(i);
            for (long long j = i*i; j < k; j+=2*i)
            {
                bs[j] = 1;
            }
        }
    }
    long long t;
    cin >> t;
    while (t--)
    {
        long long m,n;
        cin >> m >> n;
        long long A[m][n],DP[m][n];
        for (long long i = 0; i < m; i++)
        {
            for (long long j = 0; j < n; j++)
            {
                cin >> A[i][j];
                if (A[i][j] == 1 || A[i][j] == 0)
                {
                    A[i][j] = 0;
                }
                else
                {
                    if (mem[A[i][j]] != 0)
                    {
                        A[i][j] = mem[A[i][j]];
                    }
                    else
                    {
                        int o = A[i][j];
                        A[i][j] = cal(A[i][j]);
                        mem[o] = A[i][j];
                    }
                }
            }
        }
        for (long long i = 0; i < m; i++)
        {
            for (long long j = 0; j < n; j++)
            {
                if (i == 0 && j == 0)
                {
                    DP[i][j] = A[i][j];
                }
                else if (i == 0 && j > 0)
                {
                    DP[i][j] = DP[i][j-1] + A[i][j];
                }
                else if (j == 0 && i > 0)
                {
                    DP[i][j] = DP[i-1][j] + A[i][j];
                }
                else
                {
                    DP[i][j] = A[i][j] + min(DP[i][j-1],DP[i-1][j]);
                }
                
            }
        }
        
        cout << DP[m-1][n-1] << "\n";
    }
    return 0;
}