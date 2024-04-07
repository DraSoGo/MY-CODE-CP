#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    char s;
    cin >> n;
    int DP[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (i == 0)
        {
            if (DP[i] == 'T')
            {
                DP[i] = 1;
            }
            else
            {
                DP[i] = 0;
            }
            continue;
        }
        if (s == 'F')
        {
            DP[i] = DP[i-1];
        }
        else
        {
            DP[i] = DP[i-1];
        }
    }
    return 0;   
}