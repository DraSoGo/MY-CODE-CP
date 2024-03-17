#include <bits/stdc++.h>
using namespace std;
int a,b,sum = 0,co = 0;
vector <int> P;
void SieveOfEratosthenes(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    for (int p = 2; p <= n; p++)
    {
        if (prime[p])
        {
            P.push_back(p);
        }

    }
}

int main()
{
    cin >> a >> b;
    int n = 20000000;
    SieveOfEratosthenes(n);
    for (int i = a-1; i < b; i++)
    {
        sum = (sum % 1000000007 + P[i] % 1000000007) % 1000000007;
    }
    cout << sum;
    return 0;
}   