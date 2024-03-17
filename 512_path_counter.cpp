#include <bits/stdc++.h>
using namespace std;
long long B[101][101],e = 1000000007;
int A(long long x,long long y)
{
    if (B[x][y] > 0)
    {
        return B[x][y];
    }
    if (x == 1 || y == 1)
    {
        return B[x][y] = 1;
    }
    else
    {
        return B[x][y] = (A(x-1,y)%e + A(x,y-1)%e)%e;
    }
}
int main()
{
    memset(B,0,sizeof(B));
    long long x1,y1,t;
    cin >> t;
    while (t--)
    {
        cin >> x1 >> y1;
        cout << A(x1,y1) << "\n";
    }    
}