#include <bits/stdc++.h>
using namespace std;
string a = "chipi",b = "chapa",c = "dubi",d = "daba";
unsigned long long A[6000];
unsigned long long F[6000];

char chipi(unsigned long long n,unsigned long long m)
{
    if (n == 0)
    {
        return a[m];
    }
    else
    {
        unsigned long long st = A[n-1],mid = 0;
        if (n % 4 <= 1)
        {
            mid = F[n]*5;
        }
        else
        {
            mid = F[n]*4;
        }
        //cout << n << " " << m << "\n";
        if (m < st)
        {
            return chipi(n-1,m);
        }
        else if (m >= mid+st)
        {
            return chipi(n-1,m-mid-st);
        }
        else
        {   
            m -= st;
            if (n % 4 == 0)
            {
                return a[m % 5];
            }
            if (n % 4 == 1)
            {
                return b[m % 5];
            }
            if (n % 4 == 2)
            {
                return c[m % 4];
            }
            if (n % 4 == 3)
            {
                return d[m % 4];
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie();
    unsigned long long n,m;
    cin >> n;
    //n++;
    F[0] = 1;
    F[1] = 1;
    for (int i = 2; i < 5004; i++)
    {
        F[i] = F[i-1]+F[i-2];
    }
    A[0] = 5;
    for (int i = 1; i < 5000; i++)
    {
        A[i] = 2*A[i-1];
        if (i % 4 <= 1)
        {
            A[i] += 5*F[i];
        }
        else
        {
            A[i] += 4*F[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        m--;  
        cout << chipi(59,m) << "\n";   
    }
    return 0;
}
/*
chipichapachipi
5 5 5
*/