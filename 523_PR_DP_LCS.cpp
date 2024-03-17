#include <bits/stdc++.h>
using namespace std;
int A[1000][1000];
int lsc(string a,string b,int m,int n)
{
    if (A[m][n] > 0)
    {
        return A[m][n];
    }
    
    if(m == 0 || n == 0)
    {
        return A[m][n] = 0;
    }
    else if (a[m] == b[n])
    {
        return A[m][n] = lsc(a,b,m-1,n-1) + 1;
    }
    else
    {
        return A[m][n] = max(lsc(a,b,m-1,n),lsc(a,b,m,n-1));
    }
    
}
int main()
{
    int t,m,n;
    string a,b;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        memset(A,0,sizeof(A));
        cin >> m >> n >> a >> b;
        cout << lsc(a,b,a.size(),b.size()) << "\n";
    }
}