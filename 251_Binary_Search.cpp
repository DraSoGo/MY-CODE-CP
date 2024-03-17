#include <bits/stdc++.h>
using namespace std;
int binary(int A[],int l,int r,int x)
{
    if (l <= r)
    {
        int m = (l+r)/2;
        if (x == A[m])
        {
            return m;
        }
        if (x > A[m])
        {
            return binary(A,m + 1,r,x);
        }
        else
        {
            return binary(A,l,m - 1,x);
        }
    }
    return -1;
}
int main() 
{
    int a,b,md,s;
    cin >> a >> b;
    int A[a];
    for (int i = 0; i < a; i++)
    {
        cin >> A[i];
    }
    sort(A,A + a);
    for (int i = 0; i < b; i++)
    {
        cin >> s;
        int h = binary(A,0,a - 1,s);
        if (h == -1)
        {
            cout << "N\n";
        }
        else
        {
            cout << "Y\n";
        }
        
    }
    return 0;
}