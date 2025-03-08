#include <bits/stdc++.h>
using namespace std;
const int n = 2e6+1;
bool P[n];
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int x;
    P[0] = 1;
    P[1] = 1;
    for (int i = 2; i < n; i++)
    {
        if (P[i] == 0)
        {
            // cout << i << "\n";
            x = i*i;
            for (int j = i+i; j < n; j+=i)
            {
                if (j == x)
                {
                    continue;
                }
                // cout << j << "\n";
                P[j] = 1;
            }
        }
    }
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        P[x]? cout << "NO\n":cout << "YES\n";
    }
    return 0;
}