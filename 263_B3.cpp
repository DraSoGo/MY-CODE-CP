#include <bits/stdc++.h>
using namespace std;
long long a;
long long binary(long long A[],long long l,long long r)
{
    long long sumr = 0,suml = 0;
    if (l <= r)
    {
        long long m = (l+r)/2;
        long long x = A[m - 1];
        for (long long i = m; i < a; i++)
        {
            if (A[i] != x)
            {
                sumr = sumr + A[i];
            }
        }
        for (long long i = m - 2; i >= 0; i--)
        {
            if (A[i] != x)
            {
                suml = suml + A[i];
            }
        }
        //cout << m << ":" << x << "\n" << suml << " " << sumr << "\n";
        if (suml == sumr)
        {
            return 1;
        }
        if (suml < sumr)
        {
            return binary(A,m + 1,r);
        }
        else
        {
            return binary(A,l,m - 1);
        }
    }
    return -1;
}
int main() 
{
    scanf("%d",&a);
    long long A[a];
    for (long long i = 0; i < a; i++)
    {
        scanf("%d",&A[i]);
    }
    long long h = binary(A,0,a - 1);
    if (h == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    return 0;
}