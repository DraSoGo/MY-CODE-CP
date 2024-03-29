#include <bits/stdc++.h>
using namespace std;

bitset <70000000> N;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a,b,ct = 0,cc = 0,cs = 0;
    cin >> a >> b;
    int n = b+10;
    N[0] = 1;
    N[1] = 1;
    for (int i = 2; i < n; i++)
    {
        if (N[i] == 0)
        {
            for (int j = i+i; j < n; j+=i)
            {
                N[j] = 1;
            }
        }
    }
    for (int i = a; i <= b; i++)
    {
        if (N[i] == 0)
        {
            if (i - 2 >= 0)
            {
                if (N[i-2] == 0 || N[i+2] == 0)
                {
                    ct++;
                }
            }
            else
            {
                if (N[i+2] == 0)
                {
                    ct++;
                }
            }
            if (i - 4 >= 0)
            {
                if (N[i-4] == 0 || N[i+4] == 0)
                {
                    cc++;
                }
            }
            else
            {
                if (N[i+4] == 0)
                {
                    cc++;
                }
            }
            if (i - 6 >= 0)
            {
                if (N[i-6] == 0 || N[i+6] == 0)
                {
                    cs++;
                }
            }
            else
            {
                if (N[i+6] == 0)
                {
                    cs++;
                }
            }
        }
    }
    cout << ct << "\n";    
    cout << cc << "\n";    
    cout << cs;   
}