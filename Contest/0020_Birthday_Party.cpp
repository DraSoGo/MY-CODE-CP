#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,a,b,c;
    int A[ 500001];
    memset(A,0,sizeof(A));
    cin >> m >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        for (int j = b; j <= c; j++)
        {
            A[j]+= a;
        }
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        cout << A[x] << "\n";
    }
    
}
