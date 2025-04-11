#include <bits/stdc++.h>
using namespace std;

const int sz = 2e5+5;
int ANS[sz][31];

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,q,a,b;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        cin >> ANS[i][0];
    }
    for (int j = 1; j < 31; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            ANS[i][j] = ANS[ANS[i][j-1]][j-1];
        }
    }
    while (q--)
    {
        cin >> a >> b;
        for (int i = 0; i < 31; i++)
        {
            if ((b >> i) & 1)
            {
                a = ANS[a][i];
            }
            
        }
        cout << a << "\n";
    }
    
    return 0;
}