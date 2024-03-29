#include <bits/stdc++.h>
using namespace std;
// long long A[1000][1000];
// int gun(int m,int n)
// {
//     if (n <= 0 || m <= 0)
//     {
//         return 1;
//     }
//     if(A[m][n] > 0)
//     {
//         return A[m][n];
//     }
//     if (n <= 0 || m <= 0)
//     {
//         return A[m][n] = 1;
//     }
//     else
//     {
//         return A[m][n] = gun(gun(n-1,m)-gun(n,m-1),gun(n,m-1)-gun(n-1,m))+n+m;
//     }
    
// }
int main()
{
    //memset(A,0,sizeof(A));
    long long m,n;
    cin >> m >> n;
    cout << m + n + 1;
}