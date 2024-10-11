#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,c = 0,ch = 0,x = 2;
    cin >> n >> k;
    int N[n],K[k];
    for (int i = 0; i < n; i++)
    {
        N[i] = i+1;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (N[j] % x == 0 && N[j] != 0)
            {
                K[c] = N[j];
                c++;
                N[j] = 0;
            }
            if (c == k)
            {
                ch = 1;
                break;
            }
        }
        if (ch == 1)
        {
            break;
        }
        x++;
    }
    cout << K[k-1];
}