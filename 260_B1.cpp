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
    int a = 10,s;
    int A[a] = {1,3,4,6,7,9,11,12,20,100};
    cin >> s;
    int h = binary(A,0,a - 1,s);
    if (h == -1)
    {
        cout << -1;
    }
    else
    {
        cout << h + 1;
    }
    return 0;
}