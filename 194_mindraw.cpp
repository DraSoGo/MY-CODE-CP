#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long A[n],a,x = 0,sum = 0,y = 0;
    for (int i = 0; i < n; i++)
    {
        A[i] = 9999999999;
    }
    
    for (int i = 0; i < n; i++)
    {
        long long mn = 999999999;
        cin >> a;
        if (a > 0)
        {
            A[x] = a;
            x++;
            y++;
        }
        else
        {
            if (y > 0)
            {
                for (int i = 0; i <= x; i++)
                {
                    mn = min(mn,A[i]);
                }
                for (int i = 0; i <= x; i++)
                {
                    if (mn == A[i])
                    {
                        A[i] = 9999999999;
                        break;
                    }
                    
                }
                
                sum = sum + mn;
                y--;
            }
        }
    }
    cout << sum;
}